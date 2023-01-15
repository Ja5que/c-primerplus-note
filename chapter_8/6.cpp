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
T maxn (T* arr,int len){
    T ans=arr[0];
    for(int i=1;i<len;i++){
        ans=std::max(ans,arr[i]);
    }
    return ans;
}

int main() {
    int arr1[6]={1,2,3,4,5,6};
    double arr2[4]={1.1,2.2,3.3,4.4};
    std::cout<<maxn(arr1,6)<<std::endl;
    std::cout<<maxn(arr2,4)<<std::endl;
    return 0;
}