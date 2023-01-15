#include <cctype>
#include <cstring>
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
char examstr[] = "This is a test string";
void printstr(char *now, int times = 0) {
    for (int i = 0; i <= times; i++) {
        for (int j = 0; j < strlen(now); j++) {
            std::cout << now[j];
        }
        std::cout << std::endl;
    }
    return;
}
int main() {
    printstr(examstr, 3);
    printstr(examstr);
    return 0;
}