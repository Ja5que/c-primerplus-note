#include "5.h"
#include <iostream>
#include <string>
#include <cstring>

int main(){
    Stack now;
    customer temp;
    std::string name;
    Item newItem;
    double payment;
    while(!now.isfull()){
        std::cout<<"Enter the name of the customer: ";
        getline(std::cin,name);
        std::cout<<"Enter the payment of the customer: ";
        std::cin>>payment;
        std::cin.get();
        strcpy(temp.fullname,name.c_str());
        temp.payment=payment;
        now.push(temp);
    }
    std::cout<<"The stack is full now."<<std::endl;
    while(!now.isempty()){
        now.pop(temp);
        std::cout<<"The name of the customer is "<<temp.fullname<<std::endl;
        std::cout<<"The payment of the customer is "<<temp.payment<<std::endl;
    }
    std::cout<<"The stack is empty now."<<std::endl;
    return 0;
}