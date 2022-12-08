#include<iostream>
#include<string>

int date[]={31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int nummonth = 0;
	int sum = 0;
	for(auto d: date) sum += d;
	std::cout << "Enter your age :";
	std::cin >> nummonth;
	std::cout << "your total months in your life are " << nummonth * sum << std::endl;
	return 0;
}