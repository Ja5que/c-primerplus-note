#include<iostream>
#include<string>

int main()
{
	int t;
	std::cout << "Enter the number of seconds: ";
	std::cin >> t;
	std::cout << std::endl;
	std::cout << t << " Seconds = "
			  << t / (24 * 60 * 60) << " Days "
			  << (t % (24 * 60 * 60)) / (60 * 60) << " Hours "
			  << (t % (60 * 60)) / 60 << " Minutes "
			  << t % 60 << " Seconds." << std::endl;
	return 0;
}