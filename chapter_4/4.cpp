#include<iostream>
#include<string>
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
	getline(std::cin, now);
	return;
};

int main()
{
	std::string a, b;
	getsth("Enter your first name: ", a);
	getsth("Enter your second name: ", b);
	std::cout << "Here's the information in a single string: " << a + ',' + b << std::endl;
	return 0;
}