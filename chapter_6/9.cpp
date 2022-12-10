#include <fstream>
#include <iostream>
#include <string>
#include <vector>
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

struct patron {
    std::string name;
    double amount;
};

void printpatron(const std::string title, std::vector<patron> &list) {
    std::cout << title << std::endl;
    if (list.size() == 0) {
        std::cout << "none" << std::endl;
    } else {
        for (int i = 0; i < list.size(); i++) {
            std::cout << list[i].name << ' ' << list[i].amount << std::endl;
        }
    }
    return;
}
int main() {
    std::string filename;
    std::ifstream fin;

    getsthl("Enter a file name: ", filename);
    fin.open(filename.c_str());
    int num;
    std::cout << "Enter the number of contributor: " << std::endl;
    fin >> num;
    std::vector<patron> now(num), lista, listb;
    for (int i = 0; i < num; i++) {
        // fin.get();
        fin >> now[i].name >> now[i].amount;
        if (now[i].amount > 10000)
            lista.push_back(now[i]);
        else
            listb.push_back(now[i]);
    }
    printpatron("Grand patron: ", lista);
    printpatron("patron: ", listb);
    return 0;
}