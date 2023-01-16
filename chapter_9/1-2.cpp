#include<iostream>
#include "golf.h"

int main(){
    golf g;
    setgolf(g, "John", 10);
    showgolf(g);
    handicap(g, 20);
    showgolf(g);
    setgolf(g);
    showgolf(g);
    return 0;
}
