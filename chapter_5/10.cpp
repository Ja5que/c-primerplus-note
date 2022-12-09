#include <array>
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

struct candybar {
    std::string name;
    double weight;
    int energy;
};

int main() {
    int n;
    getsth("Enter number of rows: ", n);
    clr;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) std::cout << '.';
        for (int j = 1; j <= i; j++) std::cout << '*';
        clr;
    }
    return 0;
}