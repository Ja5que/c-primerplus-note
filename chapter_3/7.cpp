#include<iostream>
#include<string>

int main(){
	const double fac_km = 0.6214;
	const double fac_gl = 3.875;
	double comsuption_en;
	std::cout << "Enter the fuel comsuption in European standard: ";
	std::cin >> comsuption_en;
	std::cout << std::endl;
	std::cout << "The fuel comsuption in US standard is " << ((100.0 * fac_km) / (comsuption_en / fac_gl))
			  << "Miles/Gallon (mpg)." << std::endl;
	return 0;
}