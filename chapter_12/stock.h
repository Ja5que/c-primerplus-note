#ifndef STOCK_H_
#define STOCK_H_
#include <string>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
class Stock
{
private:
    string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();  
    Stock(string strs, long n = 0, double pr = 0.0);
    ~Stock(); 
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    friend ostream & operator<<(ostream & os,const Stock & st);
    const Stock & topval(const Stock & s) const;
};

#endif