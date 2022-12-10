#include <array>
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

template <typename T>
void getsthl(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    getline(std::cin, now);
    return;
};

int main() {
    std::array<double, 100> now;
    std::cout << "Enter 10 double value or type non-digital value to exit: "
              << std::endl;
    int num = 0;
    double sum = 0;
    for (int i = 1; i <= 10 && (std::cin >> now[i]); i++) {
        num++;
        sum += now[i];
    }
    if (num) sum /= num;
    int lnum = 0;
    for (int i = 1; i <= num; i++) {
        if (now[i] > sum) lnum++;
    }
    std::cout << "The average value is: " << sum << ", there are " << lnum
              << "donations larger than average value." << std::endl;
    return 0;
}