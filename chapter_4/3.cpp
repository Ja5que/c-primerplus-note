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
	char a[10010], b[10010];
	getsthl("Enter your first name: ", a);
	getsthl("Enter your second name: ", b);
	strcat(a, ", ");
	strcat(a, b);
	std::cout << "Here's the information in a single string: " << a << std::endl;
	return 0;
}