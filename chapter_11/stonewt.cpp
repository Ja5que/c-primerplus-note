#include "stonewt.h"
#include <iostream>

Stonewt::Stonewt(double lbs){
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = STN;
}

Stonewt::Stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = STN;
}

Stonewt::Stonewt(){
    stone = pounds = pds_left = 0;
    mode = STN;
}

Stonewt::~Stonewt(){
}

void Stonewt::setMode(MODE m){
    mode = m;
}

Stonewt operator+(const Stonewt & s1, const Stonewt & s2){
    Stonewt sum(0,0);
    sum.pounds = s1.pounds + s2.pounds;
    sum.stone = int(sum.pounds) / Stonewt::Lbs_per_stn;
    sum.pds_left = int(sum.pounds) % Stonewt::Lbs_per_stn + sum.pounds - int(sum.pounds);
    return sum;
}

Stonewt operator-(const Stonewt & s1, const Stonewt & s2){
    Stonewt diff(0,0);
    diff.pounds = s1.pounds - s2.pounds;
    diff.stone = int(diff.pounds) / Stonewt::Lbs_per_stn;
    diff.pds_left = int(diff.pounds) % Stonewt::Lbs_per_stn + diff.pounds - int(diff.pounds);
    return diff;
}

Stonewt operator*(const Stonewt & s, double n){
    Stonewt result(0,0);
    result.pounds = s.pounds * n;
    result.stone = int(result.pounds) / Stonewt::Lbs_per_stn;
    result.pds_left = int(result.pounds) % Stonewt::Lbs_per_stn + result.pounds - int(result.pounds);
    return result;
}

Stonewt operator*(double n, const Stonewt & s){
    return s * n;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s){
    if(s.mode == Stonewt::STN){
        os << s.stone << " stone, " << s.pds_left << " pounds";
    }else if(s.mode == Stonewt::LBS){
        os << s.pounds << " pounds";
    }else if(s.mode == Stonewt::DBL){
        os << s.pounds << " pounds";
    }else{
        os << "Invalid mode";
    }
    return os;
}

