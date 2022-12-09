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

struct car {
    std::string producer;
    int year;
};

int main() {
    int num;
    getsth("How many cars do you wish to catalog? ", num);
    clr;
    std::cin.get();
    car *now = new car[num];
    for (int i = 1; i <= num; i++) {
        getsthl("Please enter the maker: ", now[i - 1].producer);
        clr;
        getsth("Please enter the year made: ", now[i - 1].year);
        clr;
        std::cin.get();
    }
    std::cout << "Here is your collection: " << std::endl;
    for (int i = 1; i <= num; i++) {
        std::cout << now[i - 1].year << ' ' << now[i - 1].producer << std::endl;
    }
    delete[] now;
    return 0;
}