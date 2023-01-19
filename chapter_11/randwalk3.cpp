#include "vector2.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
#include <algorithm>

int main(){
    using namespace VECTOR;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    int steps = 0;
    double target;
    double dstep;
    std::ofstream fout;
    fout.open("randwalk3.txt");
    std::cout<<"Enter the times of the simulation: ";
    int times;
    std::cin>>times;
    int maxx=-1e9,minn=1e9,avg,sum=0;
    std::cout << "Enter target distance: ";
    std::cin >> target;
    std::cout << "Enter step length: ";
    std::cin >> dstep;
    std::cout << "Enter step length: ";
    fout << "Target Distance: " << target << ", Step Size: " << dstep << std::endl;
    for(int i=0;i<times;i++){
        while(result.magval() < target){
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            fout << steps << ": " << result << std::endl;
            steps++;
        }
        maxx=std::max(maxx,steps);
        minn=std::min(minn,steps);
        sum+=steps;
        steps = 0;
        result.reset(0.0, 0.0);
    }
    avg=sum/times;
    fout<<"The max steps is "<<maxx<<std::endl;
    fout<<"The min steps is "<<minn<<std::endl;
    fout<<"The avg steps is "<<avg<<std::endl;
    std::cout << "Bye!\n";
    fout.close();
    std::cin.clear();
    while(std::cin.get() != '\n')
        continue;
    return 0;
}