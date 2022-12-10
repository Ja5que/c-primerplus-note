#include <algorithm>
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

int main() {
    double now;
    std::cout << "Please enter your income: " << std::endl;
    while (std::cin >> now) {
        double tax = 0;
        if (now > 5000) tax += (std::min(15000.0, now) - 5000) * 0.1;
        if (now > 15000) tax += (std::min(35000.0, now) - 15000) * 0.15;
        if (now > 35000) tax += (now - 35000) * 0.2;
        std::cout << "Income = " << now - tax << std::endl;
        std::cout << "Tax =" << tax << std::endl;
    }
    return 0;
}