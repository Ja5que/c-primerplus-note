#include "8.h"
#include <iostream>

void showItem(Item & item){
    std::cout << item << std::endl;
}

void addonetoItem(Item & item){
    item++;
}

void setzerotoItem(Item & item){
    item = 0;
}

int main(){
    //test List
    List l1;
    std::cout << "l1.isempty(): " << l1.isempty() << std::endl;
    std::cout << "l1.isfull(): " << l1.isfull() << std::endl;
    l1.add(1);
    l1.add(2);
    l1.add(3);
    l1.add(4);
    l1.add(5);
    std::cout << "l1.isempty(): " << l1.isempty() << std::endl;
    std::cout << "l1.isfull(): " << l1.isfull() << std::endl;
    l1.visit(showItem);
    l1.visit(addonetoItem);
    l1.visit(showItem);
    l1.visit(setzerotoItem);
    l1.visit(showItem);
    return 0;
}