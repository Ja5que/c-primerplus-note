#include<iostream>
#include<string>

void doit(){
	int val;
	std::cout << "Enter the number of light year: ";
	std::cin >> val;
	std::cout << std::endl;
	std::cout << val << " light years = " << val * 63240 << " astronmical units." << std::endl;
	return;
}
int main(){
	doit();
	return 0;
}