#include<iostream>
#include<string>
#define clr std::cout << std::endl;

template <typename T>
void getsth(const std::string &tip, T &now){
	std::cout << tip << ' ';
	std::cin >> now;
	return;
};

template <typename T>
void getsthl(const std::string &tip, T &now){
	std::cout << tip << ' ';
	getline(std::cin, now);
	return;
};

int main()
{
	double md = 100, mc = 100;
	int tim = 0;
	while(md >= mc){
		tim++;
		md += 100 * 0.1;
		mc *= 1.05;
	}
	std::cout << " After " << tim << " year ,"
			  << "Cleo's account is " << mc
         	  << " while more than the one of Daphne which is " 
         	  << md << "." << std::endl; 
	return 0;
}