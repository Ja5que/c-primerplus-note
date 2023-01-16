#include "5.h"
bool Stack::isempty() const{
    return top == 0;
}
bool Stack::isfull() const{
    return top == MAXSIZE;
}
bool Stack::push(const Item &item){
    if(top < MAXSIZE){
        items[top++] = item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item &item){
    if(top > 0){
        item = items[--top];
        return true;
    }
    else
        return false;
}