#include<iostream>
#include<string>

int main()
{
	const int fac = 12;
	int height;
	std::cout << "Please input you body height: ___\b\b\b";
	std::cin >> height;
	std::cout << std::endl;
	int heightinfoot = height / fac;
	int heightininch = height % fac;
	std::cout << "Your body height is " << heightinfoot << " Foots " << heightininch << " Inchs." << std::endl;
	return 0;
}