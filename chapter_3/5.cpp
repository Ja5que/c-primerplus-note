#include<iostream>
#include<string>

int main(){
	long long totp, chinap;
	std::cout << "Enter the world's population: ";
	std::cin >> totp;
	std::cout << std::endl;
	std::cout << "Enther the population of China: ";
	std::cin >> chinap;
	std::cout << std::endl;
	std::cout.precision(8);
	std::cout << "The population of the China is " << chinap * 100.0 / totp
			  << "% of the world population." << std::endl;
	return 0;
}