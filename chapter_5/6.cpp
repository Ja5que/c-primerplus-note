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
int sale[3][12];
int totalsale[3];

int main()
{
	std::cout << "Enter the sales of book <<C++ for Fools>> each month." << std::endl;
	for(int j = 0; j <= 2; j++)
	for(int i = 0; i <= 11; i++){
		getsth("Enter the sales of book in Year " + std::to_string(j + 1) + ' ' + month[i], sale[j][i]);
		clr;
		totalsale[j] += sale[j][i];
	}
	for(int j = 0; j <= 2; j++){
		std::cout << "The total sales in Year " << j + 1 <<" is " << totalsale[j] << std::endl;
		for(int i = 0; i <= 11; i++){
			std::cout << month[i] + " : " << sale[j][i] << std::endl;
		}
	}
	return 0;
}