#include<iostream>
#include<string>
const int fac_fi=12;
const double fac_im=0.0254;
const double fac_kp=2.2;
	
double calcbmi(double weightinkg, double heightinmeter){
	return weightinkg / (heightinmeter * heightinmeter);
}

int main()
{
	double weightinpound, height1, height2;
	std::cout << "Please input your height sparate in foots and inchs";
	std::cin >> height1 >> height2;
	std::cout << std::endl;
	std::cout << "Please input your weight in pounds";
	std::cin >> weightinpound;
	std::cout << std::endl;
	std::cout << "Your BMI is " << calcbmi(weightinpound / fac_kp, 
										  (height1 * fac_fi + height2) * fac_im)
								<< std::endl;
	return 0;
}