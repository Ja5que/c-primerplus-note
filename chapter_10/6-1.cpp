#include "6.h"
#include <iostream>

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    std::cout << "x = " << x << ", y = " << y << std::endl;
}

Move Move::add(const Move &m) const {
    Move ans;
    ans.x = x + m.x;
    ans.y = y + m.y;
    return ans;
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}

