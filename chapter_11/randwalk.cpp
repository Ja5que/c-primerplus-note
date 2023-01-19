#include "vector.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
    using namespace VECTOR;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    std::ofstream fout;
    fout.open("randwalk.txt");
    std::cout << "Enter target distance (q to quit): ";
    while(std::cin >> target){
        std::cout << "Enter step length: ";
        if(!(std::cin >> dstep))
            break;
        fout << "Target Distance: " << target << ", Step Size: " << dstep << std::endl;
        while(result.magval() < target){
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            fout << steps << ": " << result << std::endl;
            steps++;
        }
        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        fout << result << std::endl;
        result.polar_mode();
        fout << " or\n" << result << std::endl;
        fout << "Average outward distance per step = "
            << result.magval() / steps << std::endl;
        steps = 0;
        result.reset(0.0, 0.0);
        std::cout << "Enter target distance (q to quit): ";
    }
    std::cout << "Bye!\n";
    fout.close();
    std::cin.clear();
    while(std::cin.get() != '\n')
        continue;
    return 0;
}