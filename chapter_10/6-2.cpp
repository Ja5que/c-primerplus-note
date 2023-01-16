#include "6.h"
#include <iostream>
#include <string>

int main(){
    //test Move
    Move m1(1,2);
    Move m2(3,4);
    m1.showmove();
    m2.showmove();
    Move m3=m1.add(m2);
    m3.showmove();
    m3.reset(5,6);
    m3.showmove();
    return 0;
}