#include "vector2.h"
#include <cmath>
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::sqrt;
using std::cout;
using std::endl;

namespace VECTOR{
    const double Rad_to_deg = 45.0 / atan(1.0);
    double Vector::set_mag (const double x,const double y)const{
        //cout<<'*'<<sqrt(x * x + y * y)<<endl;
        return sqrt(x * x + y * y);
    }
    double Vector::set_ang (const double x,const double y)const{
        if(x == 0.0 && y == 0.0)
            return 0.0;
        else
            return atan2(y, x);
    }
    double Vector::set_x (const double mag,const double ang)const{
        return mag * cos(ang);
    }
    double Vector::set_y (const double mag,const double ang)const{
        return mag * sin(ang);
    }
    Vector::Vector(){
        x = y = 0.0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode form){
        mode = form;
        if(form == RECT){
            x = n1;
            y = n2;
        }
        else if(form == POL){
            x = set_x(n1, n2);
            y = set_y(n1, n2);
        }
        else{
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }
    void Vector::reset(double n1, double n2, Mode form){
        mode = form;
        if(form == RECT){
            x = n1;
            y = n2;
        }
        else if(form == POL){
            x = set_x(n1, n2);
            y = set_y(n1, n2);
        }
        else{
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector(){
    }
    void Vector::polar_mode(){
        mode = POL;
    }
    void Vector::rect_mode(){
        mode = RECT;
    }
    Vector Vector::operator+(const Vector & b) const{
        return Vector(x + b.x, y + b.y);
    }
    Vector Vector::operator-(const Vector & b) const{
        return Vector(x - b.x, y - b.y);
    }
    Vector Vector::operator-() const{
        return Vector(-x, -y);
    }
    Vector Vector::operator*(double n) const{
        return Vector(n * x, n * y);
    }
    Vector operator*(double n, const Vector & a){
        return a * n;
    }
    std::ostream & operator<<(std::ostream & os, const Vector & v){
        if(v.mode == Vector::RECT)
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        else if(v.mode == Vector::POL){
            os << "(m, a) = (" << v.set_mag(v.x,v.y) << ", " << v.set_ang(v.x,v.y) * Rad_to_deg << ")";
        }
        else
            os << "Vector object mode is invalid";
        return os;
    }
        
}
