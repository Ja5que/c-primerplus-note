#include<iostream>
#include<string>
#include<array>
#define clr std::cout << std::endl;

struct student{
	std::string lastname, firstname;
	char grade;
	int age;
};

template <typename T>
void getsth(const std::string &tip, T &now){
	std::cout << tip << ' ';
	std::cin >> now;
	return;
};

template <typename T>
void getsthl(const std::string &tip, T &now){
	std::cout << tip << ' ';
	getline(std::cin, now);
	return;
};

int main()
{
	std::array<long double, 10010> fac;
	fac[0] = fac[1] = 1;
	for(int i = 2; i <= 100; i++){
		fac[i] = fac[i-1] * i;
	}
	for(int i = 0; i <= 100; i++){
		std::cout << i << "!= " << fac[i] << std::endl;
	}
	return 0;
}