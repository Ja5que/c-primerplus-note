#include "7.h"
#include <iostream>
#include <cstring>

Plorg::Plorg(const char * n, int ci){
    strcpy(name, n);
    CI = ci;
}

void Plorg::setCI(int ci){
    CI = ci;
}

void Plorg::show() const{
    std::cout << "Name: " << name << std::endl;
    std::cout << "CI: " << CI << std::endl;
}

