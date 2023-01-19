#include "stonewt2.h"
#include <iostream>

int main(){
    double input, input1, input2;
    Stonewt arr[6]={Stonewt(1,1),Stonewt(2,2),Stonewt(3,3)};
    int i = 0;
    std::cout << "Enter 3 weights: ";
    while (i < 3 && std::cin >> input1>>input2){
        arr[i] = Stonewt(input1, input2);
        i++;
    }
    Stonewt eleven = Stonewt(11, 0);
    Stonewt max = arr[0];
    Stonewt min = arr[0];
    int num = 0;
    for (int i = 1; i < 6; i++){
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        num += (arr[i]>=eleven);
    }
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Number of weights >= 11: " << num << std::endl;
    return 0;
}