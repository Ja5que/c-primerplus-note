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
    std::string now;
    int numa = 0, numb = 0, num = 0;
    while (std::cin >> now) {
        if (now == "q") break;
        if (isalpha(now[0])) {
            if (now[0] == 'a' || now[0] == 'e' || now[0] == 'i' ||
                now[0] == 'o' || now[0] == 'u')
                numa++;
            else
                numb++;
        }
        num++;
    }
    std::cout << numa << " words beginning with consonants." << std::endl;
    std::cout << numb << " words beginning with vowels." << std::endl;
    std::cout << num - numa - numb << " other" << std::endl;
    return 0;
}