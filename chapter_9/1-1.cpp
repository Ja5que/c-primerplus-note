#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g){
    std::cout << "Enter the name of the golfer: ";
    std::cin.getline(g.fullname, len);
    if (g.fullname[0] == '\0') {
        return 0;
    }
    std::cout << "Enter the handicap of the golfer: ";
    std::cin >> g.handicap;
    std::cin.get();
    return 1;
}

void handicap(golf & g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf & g) {
    std::cout << "Name: " << g.fullname << std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}