#include <iostream>

#include "4.h"
namespace SALES {
void setSales(Sales& s, const double ar[], int n) {
    double sum = 0;
    s.max = ar[0];
    s.min = ar[0];
    for (int i = 0; i < n; i++) {
        s.sales[i] = ar[i];
        sum += ar[i];
        if (s.max < ar[i]) {
            s.max = ar[i];
        }
        if (s.min > ar[i]) {
            s.min = ar[i];
        }
    }
    s.average = sum / n;
}

void setSales(Sales& s) {
    double sum = 0;
    std::cout << "Enter the sales of the first quarter: ";
    std::cin >> s.sales[0];
    s.max = s.sales[0];
    s.min = s.sales[0];
    sum += s.sales[0];
    for (int i = 1; i < QUARTERS; i++) {
        std::cout << "Enter the sales of the next quarter: ";
        std::cin >> s.sales[i];
        sum += s.sales[i];
        if (s.max < s.sales[i]) {
            s.max = s.sales[i];
        }
        if (s.min > s.sales[i]) {
            s.min = s.sales[i];
        }
    }
    s.average = sum / QUARTERS;
}

void showSales(const Sales& s) {
    std::cout << "Sales of the first quarter: " << s.sales[0] << std::endl;
    std::cout << "Sales of the second quarter: " << s.sales[1] << std::endl;
    std::cout << "Sales of the third quarter: " << s.sales[2] << std::endl;
    std::cout << "Sales of the fourth quarter: " << s.sales[3] << std::endl;
    std::cout << "Average sales: " << s.average << std::endl;
    std::cout << "Maximum sales: " << s.max << std::endl;
    std::cout << "Minimum sales: " << s.min << std::endl;
}
}  // namespace SALES