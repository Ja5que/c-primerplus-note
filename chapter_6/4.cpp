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

template <typename T>
void getsthl(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    std::cin.getline(now, 80);
    return;
};

// Benevolent order of programmers strcture
const int strsize = 10010;
struct Bop {
    char fullname[strsize];  // real name
    char title[strsize];     // job title
    char bopname[strsize];   // secret BOP name
    int preference;          // 0 = fullname, 1 = title, 2 = bopname
};

int main() {
    const int size = 5;
    Bop bop[size] = {{"Wimp Macho", "bbb", "c", 0},
                     {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
                     {"Celia Laiter", "2AAAA", "3AAAAA", 2},
                     {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
                     {"Pat Hand", "4CCCC", "3CCCCC", 1}};
    std::cout << "Benevolent order of Programmers report. ";
    clr;
    clr;
    std::cout << "a. display by name     b. display by title";
    clr;
    std::cout << "c. display by bopname  d. display by preference";
    clr;
    std::cout << "q. quit";
    clr;
    char ch;
    while (std::cin >> ch) {
        if (ch == 'q') break;
        switch (ch) {
            case 'a':
                for (int i = 0; i < size; i++)
                    std::cout << bop[i].fullname << std::endl;
                break;
            case 'b':
                for (int i = 0; i < size; i++)
                    std::cout << bop[i].title << std::endl;
                break;
            case 'c':
                for (int i = 0; i < size; i++)
                    std::cout << bop[i].bopname << std::endl;
                break;
            case 'd':
                for (int i = 0; i < size; i++)
                    std::cout << bop[i].preference << std::endl;
                break;
            default:
                std::cout << "Please enter a, b, c, or d: " << std::endl;
                break;
        }
    }
    return 0;
}