#include<iostream>
#include<string>
#include<array>
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

int main()
{
	std::array<int ,3> now;
	double average = 0;
	for(int i = 0; i <= 2; i++){
		std::cout << "For the " << i + 1 << " times, ";
		getsth("Enter result of the 40 meters runing time: ", now[i]);
		clr;
		average += now[i];
	}
	average /= 3.0;
	std::cout << "The all three time results are: " << now[0] << ', ' << now[1] << ', ' << now[2] << '.';
	clr;
	std::cout << "The average result: " << average << std::endl;
	return 0;
}