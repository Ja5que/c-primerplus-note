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

int main()
{
	candybar now[] = {{"Mocha Munch", 2.3, 230}, {"Big Rabbit", 5, 300}, {"Joy Boy", 4.1, 430}};
	for(int i = 0; i <= 2; i++){
		std::cout << "The name of the CandyBar: " << now[i].name << std::endl;
		std::cout << "The weight of the candy: " << now[i].weight << std::endl;
		std::cout << "The calories information: " << now[i].energy << std::endl;
	}
	return 0;
}