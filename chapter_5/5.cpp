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

struct candybar{
	std::string name;
	double weight;
	int energy;
};

std::string month[]={
	"Jan", "Feb", "Mar", "Apr",
	"May", "Jun", "July", "Aug",
	"Sept", "Oct", "Nov", "Dec"
};
int sale[12];
int totalsale = 0;

int main()
{
	std::cout << "Enter the sales of book <<C++ for Fools>> each month." << std::endl;
	for(int i = 0; i <= 11; i++){
		getsth("Enter the sales of book in " + month[i], sale[i]);
		clr;
		totalsale += sale[i];
	}
	std::cout << "The total sales is " << totalsale << std::endl;
	for(int i = 0; i <= 11; i++){
		std::cout << month[i] + " : " << sale[i] << std::endl;
	}
	return 0;
}