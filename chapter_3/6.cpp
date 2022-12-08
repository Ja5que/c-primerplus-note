#include<iostream>
#include<string>

int main(){
	double dis, oil_consumption;
	std::cout << "Enter the distance that you've dirver in kilometer: ";
	std::cin >> dis;
	std::cout << std::endl;
	std::cout << "Enter the comsumption of oil: ";
	std::cin >> oil_consumption;
	std::cout << std::endl;
	std::cout << "The average fuel comsumption is " << ((100.0 * oil_consumption) / dis)
			  << " L/100km" << std::endl;
	return 0;
}