#include <algorithm>
#include <iostream>
#include <string>
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

template <typename T>
T max5(T* arr){
    T ans=arr[0];
    for(int i=1;i<4;i++){
        ans=std::max(ans,arr[i]);
    }
    return ans;
}

int main() {
    int arr1[5]={1,2,3,4,5};
    double arr2[5]={1.1,2.2,3.3,4.4,5.5};
    std::cout<<max5(arr1)<<std::endl;
    std::cout<<max5(arr2)<<std::endl;
    return 0;
}