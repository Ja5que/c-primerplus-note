#include "4.h"
#include <iostream>

int main(){
    using namespace SALES;
    Sales s1,s2;
    double ar[4] = {1,2,3,4};
    setSales(s1, ar, 4);
    setSales(s2);
    showSales(s1);
    showSales(s2);
}