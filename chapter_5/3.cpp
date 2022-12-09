#include<iostream>
#include<string>
#include<cstring>
#define clr std::cout << std::endl;

template <typename T>
void getsth(const std::string &tip, T &now){
	std::cout << tip << ' ';
	std::cin >> now;
	return;
};

template <typename T>
void getsthl(const std::string &tip, T &now){
	std::cout << tip << ' ';
	std::cin.getline(now,80);
	return;
};

int main()
{
	double now = 0,s = 0;
	while(true){
		getsth("Enter a number (int/double) (0 to exit): ", now);
		clr;
		s += now;
		std::cout << "Until now, the sum of the number you inputed is: " << s << std::endl;
		if(now == 0) break;
	}
	return 0;
}