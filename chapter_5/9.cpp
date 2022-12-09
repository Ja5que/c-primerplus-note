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
    getline(std::cin, now);
    return;
};

struct pizza {
    std::string name;
    double diameter, weight;
};

int main() {
    std::string now;
    int num = 0;
    std::cout << "Enter a word (type 'done' to stop the program.):"
              << std::endl;
    clr;
    while (true) {
        std::cin >> now;
        if (now != "done")
            num++;
        else
            break;
    }
    std::cout << "You entered a total of " << num << " words." << std::endl;
    return 0;
}