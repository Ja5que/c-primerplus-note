#include <iostream>

#include "4.h"

SALES::SALES(const double ar[], int n) {
    double sum = 0;
    sales[0] = ar[0];
    max = ar[0];
    min = ar[0];
    sum += ar[0];
    for (int i = 1; i < QUARTERS; i++) {
        sales[i] = ar[i];
        sum += ar[i];
        if (max < ar[i]) {
            max = ar[i];
        }
        if (min > ar[i]) {
            min = ar[i];
        }
    }
    average = sum / QUARTERS;
}

SALES::SALES() {
    double sum = 0;
    std::cout << "Enter the sales of the first quarter: ";
    std::cin >> sales[0];
    max = sales[0];
    min = sales[0];
    sum += sales[0];
    for (int i = 1; i < QUARTERS; i++) {
        std::cout << "Enter the sales of the " << i + 1 << " quarter: ";
        std::cin >> sales[i];
        sum += sales[i];
        if (max < sales[i]) {
            max = sales[i];
        }
        if (min > sales[i]) {
            min = sales[i];
        }
    }
    average = sum / QUARTERS;
}

void SALES::showSales() {
    std::cout << "Sales of the first quarter: " << sales[0] << std::endl;
    std::cout << "Sales of the second quarter: " << sales[1] << std::endl;
    std::cout << "Sales of the third quarter: " << sales[2] << std::endl;
    std::cout << "Sales of the fourth quarter: " << sales[3] << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
}
