#include <cstring>
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
    std::cin.getline(now, 80);
    return;
};

struct chaff{
    char dross[20];
    int slag;
};

int main(){
    chaff buffer[1010];
    chaff *p1=new(buffer)chaff[2];
    chaff *buffer2=new chaff[2];
    chaff *p2=new(buffer2)chaff[2];
    for(int i=0;i<2;i++){
        getsth("Enter the dross of the chaff: ", p1[i].dross);
        getsth("Enter the slag of the chaff: ", p1[i].slag);    
    }
    for(int i=0;i<2;i++){
        getsth("Enter the dross of the chaff2: ", p2[i].dross);
        getsth("Enter the slag of the chaff2: ", p2[i].slag);    
    }
    for(int i=0;i<2;i++){
        std::cout << "Dross: " << p1[i].dross << std::endl;
        std::cout << "Slag: " << p1[i].slag << std::endl;
    }
    for(int i=0;i<2;i++){
        std::cout << "Dross2: " << p2[i].dross << std::endl;
        std::cout << "Slag2: " << p2[i].slag << std::endl;
    }
    delete [] buffer2;
    return 0;
}