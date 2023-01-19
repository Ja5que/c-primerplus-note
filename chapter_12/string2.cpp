#include "string2.h"
#include <cstring>

string2::string2(){
    len = 0;
    str = nullptr;
}

string2::string2(const char * s){
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
}

string2::string2(const string2 & st){
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
}

string2::~string2(){
    delete [] str;
}

string2 string2::operator=(const string2 & st){
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}

string2 string2::operator=(const char * s){
    delete [] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const string2 & st){
    os << st.str;
    return os;
}

std::istream & operator>>(std::istream & is, string2 & st){
    char temp[string2::CINLIM];
    is.get(temp, string2::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

bool operator==(const string2 & st1, const string2 & st2){
    return (strcmp(st1.str, st2.str) == 0);
}

bool operator==(const string2 & st1, const char * s){
    return (strcmp(st1.str, s) == 0);
}

char & string2::operator[](int i){
    return str[i];
}

string2 & string2::operator+(const string2 & st){
    string2 * opt = new string2;
    string2 & temp = *opt;
    temp.len = len + st.len;
    temp.str = new char[temp.len + 1];
    strcpy(temp.str, str);
    strcat(temp.str, st.str);
    return temp;
}

string2 & operator+(const char * s, const string2 & st){
    string2 * opt = new string2;
    string2 & temp = *opt;
    temp.len = strlen(s) + st.len;
    temp.str = new char[temp.len + 1];
    strcpy(temp.str, s);
    strcat(temp.str, st.str);
    return temp;
}
void string2::stringlow(){
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
}


void string2::stringup(){
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
}

int string2::has(char ch){
    int count = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == ch)
            count++;
    return count;
}




