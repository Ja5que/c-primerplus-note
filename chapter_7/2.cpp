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

void getscore(double *score, int &len) {
    len = 0;
    double tmp;
    std::cout << "Please input the score, max 10" << std::endl;
    while (std::cin >> tmp) {
        score[len] = tmp;
        len++;
        if (len >= 10) break;
    }
    return;
}
double calcavg(double *score, int len) {
    double sum = 0;
    for (int i = 0; i < len; i++) {
        sum += score[i];
    }
    return sum / len;
}
void printavg(double avg) {
    std::cout << "The average score is " << avg << std::endl;
    return;
}

int main() {
    int len;
    double score[20];
    getscore(score, len);
    printavg(calcavg(score, len));
    return 0;
}