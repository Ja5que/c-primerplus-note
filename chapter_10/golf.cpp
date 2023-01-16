#include "golf.h"
#include <iostream>
#include <cstring>

golf::golf(const char *name, int hc) {
    strcpy(this->fullname, name);
    this->handicap = hc;
    return;
}
golf::golf() {
    std::cout<<"Please enter the name of the player: ";
    std::cin.getline(this->fullname, len);
    std::cout<<"Please enter the handicap of the player: ";
    std::cin>>this->handicap;
    std::cin.get();
    return;
}
void golf::sethandicap(int hc) {
    this->handicap = hc;
}
void golf::showgolf() {
    std::cout << "Name: " << this->fullname << std::endl;
    std::cout << "Handicap: " << this->handicap << std::endl;
}