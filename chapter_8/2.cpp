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

struct CandyBar {
    std::string name;
    double weight;
    int calories;
};
void setcandybar(CandyBar &now, const std::string &name = "Millennium Munch",
                 double weight = 2.85, int calories = 350) {
    now.name = name;
    now.weight = weight;
    now.calories = calories;
    return;
}
void displaycandybar(const CandyBar &now) {
    std::cout << "Name: " << now.name << std::endl;
    std::cout << "Weight: " << now.weight << std::endl;
    std::cout << "Calories: " << now.calories << std::endl;
    return;
}
int main() {
    CandyBar now;
    setcandybar(now);
    displaycandybar(now);
    setcandybar(now, "Mocha Munch", 2.3, 500);
    displaycandybar(now);
    return 0;
}