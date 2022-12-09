#include<iostream>
#include<string>
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
	using namespace std;
	string name, dessert;
	getsthl("Enter your name: ",name);
	clr;
	getsthl("Enter your favorite dessert: ",dessert);
	clr;
	cout << "I have delicious " << dessert << " for you " << name << '.' << std::endl;
	return 0;
}