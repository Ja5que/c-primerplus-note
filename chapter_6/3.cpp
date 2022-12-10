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

int main() {
    std::cout << "Please enter one of the following choices: ";
    clr;
    clr;
    std::cout << "c) carnivore    p) pianist";
    clr;
    std::cout << "t) tree         g) game";
    clr;
    char ch;
    bool stay = true;
    while (std::cin >> ch && stay) {
        stay = false;
        switch (ch) {
            case 'c':
                std::cout << "Tiger is a carnivore." << std::endl;
                break;
            case 'p':
                std::cout << "Mozart is a great pianst." << std::endl;
                break;
            case 't':
                std::cout << "A maple is a tree." << std::endl;
                break;
            case 'g':
                std::cout << "Supper Mario is a great game." << std::endl;
                break;
            default:
                std::cout << "Please enter c, p, t, or g: " << std::endl;
                stay = true;
                break;
        }
    }
    return 0;
}