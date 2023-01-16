#include "4.h"
#include <iostream>

int main(){
    double arr[4] = {1,2,3,4};
    SALES s1(arr, 4);
    SALES s2;
    s1.showSales();
    s2.showSales();
}