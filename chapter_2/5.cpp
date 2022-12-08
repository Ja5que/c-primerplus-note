#include<iostream>
#include<string>

int main(){
	int val, nxtval;
	std::cout << "Please enter a Celsius value: ";
	std::cin >> val;
	std::cout << std::endl;
	nxtval = val * 1.8 + 32;
	std::cout << val << " degrees Celsius is " << nxtval << " degrees Fahrenheit" << std::endl;
	return 0;
}