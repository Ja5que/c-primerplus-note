#ifndef STONEWT_H
#define STONEWT_H
#include <iostream>

class Stonewt{
public:
    enum MODE{STN = 1, LBS = 2, DBL = 3};
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    MODE mode;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void setMode(MODE m);
    friend Stonewt operator+(const Stonewt & s1, const Stonewt & s2);
    friend Stonewt operator-(const Stonewt & s1, const Stonewt & s2);
    friend Stonewt operator*(const Stonewt & s, double n);
    friend Stonewt operator*(double n, const Stonewt & s);
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};

#endif