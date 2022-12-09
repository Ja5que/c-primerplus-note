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

struct pizza{
	std::string name;
	double diameter, weight;
};

int main()
{
	pizza *now = new pizza;
	getsthl("Enter the pizza company: ", now->name);
	clr;
	getsth("Enter the diameter of pizza: ", now->diameter);
	clr;
	getsth("Enter the weight of pizza: ", now->weight);
	clr;
	std::cout << "Here is the pizza information: " << std::endl;
	std::cout << "Company: " << now->name << std::endl;
	std::cout.precision(6);
	std::cout << "Diameter: " << now->diameter << std::endl;
	std::cout << "Weight: " << now->weight << std::endl;
	return 0;
}