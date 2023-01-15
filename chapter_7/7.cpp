#include <algorithm>
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

double *Fill_array(double *arr) {
    std::cout << "Please input double value,stop with non-numeric value"
              << std::endl;
    double num;
    int len = 0;
    for (; std::cin >> num; len++) {
        arr[len] = num;
    }
    return arr + len;
}
void Show_array(const double *arr_beg, const double *arr_end) {
    for (const double *arr_iter = arr_beg; arr_iter != arr_end; arr_iter++) {
        std::cout << *arr_iter << ' ';
    }
    std::cout << std::endl;
    return;
}
void Reverse_array(double *arr_beg, double *arr_end) {
    double *l = arr_beg;
    double *r = arr_end - 1;
    while (l < r) {
        std::swap(*l, *r);
        l++;
        r--;
    }
    return;
}
int main() {
    double arr[1010];
    double *arr_end = Fill_array(arr);
    Show_array(arr, arr_end);
    Reverse_array(arr, arr_end);
    Show_array(arr, arr_end);
    return 0;
}