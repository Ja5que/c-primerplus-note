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

double avg(int x, int y) { return 2 * x * y / (x + y); }
int main() {
    int x, y;
    while (std::cin >> x >> y) {
        if (x == 0 || y == 0) break;
        std::cout << avg(x, y) << std::endl;
    }
    return 0;
}