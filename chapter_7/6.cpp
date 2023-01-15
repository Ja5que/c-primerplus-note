#include <iostream>
#include <string>
#include <vector>
#define clr std::cout << std::endl;

template <typename T>
void getsth(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    std::cin >> now;
    return;
};

template <typename T>
void getsthl(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    getline(std::cin, now);
    return;
};

int Fill_array(double *arr){
    std::cout <<"Please input double value,stop with non-numeric value"<<std::endl;
    double num;
    int len=0;
    for(;std::cin>>num;len++){
        arr[len]=num;
    }
    return len;
}
void Show_array(const double *arr,int len){
    for(int i=0;i<len;i++){
        std::cout<<arr[i]<<' ';
    }
    clr;
    return;
}
void Reverse_array(double *arr,int len){
    for(int i=0;i<len/2;i++){
        double tmp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=tmp;
    }
    return;
}
int main() {
    int len=0;
    double arr[1010];
    len=Fill_array(arr);
    Show_array(arr,len);
    Reverse_array(arr,len);
    return 0;
}