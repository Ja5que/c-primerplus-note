#include <cstring>
#include <iostream>
#include <string>
#define clr std::cout << std::endl;

template <typename T>
void getsth(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    std::cin >> now;
    return;
};


void getsthl(const std::string &tip, std::string &now) {
    std::cout << tip << ' ';
    getline(std::cin,now);
    return;
};
void toupperstring(std::string &now) {
    for (int i = 0; i < now.length(); i++) {
        now[i] = toupper(now[i]);
    }
    return;
}

int main() {
    std::string tmp;
    for (;;) {
        getsthl("Please input a string", tmp);
        if (tmp == "q" || tmp == "Q") {
            std::cout << "Bye" << std::endl;
            break;
        }
        toupperstring(tmp);
        std::cout << tmp << std::endl;
    }
    return 0;
}