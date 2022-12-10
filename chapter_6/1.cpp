#include <cctype>
#include <iostream>
#include <string>
#define clr std::cout << std::endl;

struct student {
    std::string lastname, firstname;
    char grade;
    int age;
};

template <typename T>
void getsth(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    std::cin >> now;
    return;
};

int main() {
    char ch;
    std::cin.get(ch);
    while (ch != '@') {
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
        std::cout << ch;
        std::cin.get(ch);
    }
    return 0;
}