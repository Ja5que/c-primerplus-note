#include <cstring>
#include <fstream>
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
    std::string filename;
    std::ifstream fin;

    getsthl("Enter a file name: ", filename);
    fin.open(filename.c_str());
    int num = 0;
    char ch;
    while (fin >> ch) {
        num++;
    }
    std::cout << "There are " << num << " character in " << filename << '.'
              << std::endl;
    return 0;
}