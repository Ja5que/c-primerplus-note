#include<iostream>
#include<string>
const int fac_fi=12;
const double fac_im=0.0254;
const double fac_kp=2.2;
	
int main()
{
	int d = 0, m = 0, s = 0;
	std::cout << "Enter a latitude in degree, minutes, and seconds:";
	std::cout << std::endl;
	std::cout << "First, enter the degree: ";
	std::cin >> d;
	std::cout << std::endl;	
	std::cout << "Next, enter the minutes of arc: ";
	std::cin >> m;
	std::cout << std::endl;	
	std::cout << "Finally, enter the seconds of arc: ";
	std::cin >> s;
	std::cout << std::endl;
	std::cout << d << " Degrees, " << m << " Minutes, " << s << " Seconds = "
			  << double(d + m / 60.0 + s / 3600.0) <<" Degrees." << std::endl; 	
	return 0;
}