#ifndef SRINGSS22_H_
#define SRINGSS22_H_
#include <iostream>
class string2{
private:
    static const int CINLIM = 80;
    char * str;
    int len;
public:
    string2();
    string2(const char * s);
    string2(const string2 & st);
    ~string2();
    string2 operator=(const string2 & st);
    string2 operator=(const char * s);
    friend bool operator==(const string2 & st1, const string2 & st2);
    friend bool operator==(const string2 & st1, const char * s);
    friend std::ostream & operator<<(std::ostream & os, const string2 & st);
    friend std::istream & operator>>(std::istream & is, string2 & st);
    char & operator[](int i);
    string2 & operator+(const string2 & st);
    friend string2 & operator+(const char * s, const string2 & st);
    void stringlow();
    void stringup();
    int has(char ch);
};

#endif