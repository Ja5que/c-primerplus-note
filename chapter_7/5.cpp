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

long long getfac(int n) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}
int main() {
    int now;
    getsth("Please input a number", now);
    std::cout << "the power of " << now << " is " << getfac(now) << std::endl;
    return 0;
}