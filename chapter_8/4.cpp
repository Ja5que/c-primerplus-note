#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
    char *str;  // points to a string
    int ct;     // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy &now, const char *str) {
    now.ct = strlen(str);
    now.str = new char[now.ct];
    strcpy(now.str, str);
    return;
}

void show(const stringy &now, int times = 1) {
    for (int i = 0; i < times; i++) {
        std::cout << now.str << endl;
    }
    return;
}

void show(const char *str, int times = 1) {
    for (int i = 0; i < times; i++) {
        std::cout << str << endl;
    }
    return;
}
int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);  // first argument is a reference,
                          // allocates space to hold copy of testing,
                          // sets str member of beany to point to the
                          // new block, copies testing to new block,
                          // and sets ct member of beany
    show(beany);         // prints member string once
    show(beany, 2);      // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);       // prints testing string once
    show(testing, 3);    // prints testing string thrice
    show("Done!");
    return 0;
}