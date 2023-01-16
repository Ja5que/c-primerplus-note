#include "golf.h"
#include <iostream>
#include <cstring>
#include <string>

int main(){
    golf g1("John", 10);
    golf g2;
    golf g3;
    g1.showgolf();
    g2.showgolf();
    g3.showgolf();
    g1.sethandicap(20);
    g1.showgolf();
    g2.sethandicap(30);
    g2.showgolf();
    g3.sethandicap(40);
    g3.showgolf();
    return 0;
}