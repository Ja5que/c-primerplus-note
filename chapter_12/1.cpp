#include "Cow.h"
#include <iostream>
#include <cstring>  

int main(){
    //test Class CoW
    Cow cow1;
    Cow cow2("cow2", "hobby2", 2);
    Cow cow3(cow2);
    cow1.ShowCow();
    cow2.ShowCow();
    cow3.ShowCow();
    cow1 = cow2;
    cow1.ShowCow();
    return 0;
}