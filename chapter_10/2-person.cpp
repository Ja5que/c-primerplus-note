#include "2-person.h"
#include <iostream>
#include <string>
#include <cstring>

void Person::Show() const{
    std::cout<<"this person's name is:"<<std::endl;
    std::cout<<this->fname<<' '<<this->lname<<std::endl;    
}

void Person::FormalShow() const{
    std::cout<<"this person's name is:"<<std::endl;
    std::cout<<this->lname<<','<<this->fname<<std::endl;    
}

Person::Person(const std::string &ln,const char *fn){
    this->lname = ln;
    strcpy(this->fname, fn);
}