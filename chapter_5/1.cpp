#include<iostream>
#include<string>
#define clr std::cout << std::endl;

struct student{
	std::string lastname, firstname;
	char grade;
	int age;
};

template <typename T>
void getsth(const std::string &tip, T &now){
	std::cout << tip << ' ';
	std::cin >> now;
	return;
};

int main()
{
	int a, b;
	getsth("Enter the first number: ", a);
	getsth("Enter the second number: ", b);
	int sum = 0;
	for (int i = a; i <= b; i++){
		sum += i;
	}
	std::cout << "Sum the number from " << a << " to " << b << ", sum is " << sum << std::endl;
	return 0;
}