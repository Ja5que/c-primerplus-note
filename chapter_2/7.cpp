#include<iostream>
#include<string>

void doit(){
	int nhours, nminutes;
	std::cout << "Enter the number of hours: ";
	std::cin >> nhours;
	std::cout << std::endl;
	std::cout << "Enter the number of minutes: ";
	std::cin >> nminutes;
	std::cout << std::endl;
	std::cout << "Times: " << nhours << ' ' << nminutes <<std::endl;
	return;
}
int main(){
	doit();
	return 0;
}