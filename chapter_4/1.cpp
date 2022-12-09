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
	student now;
	getsth("What is your first name?", now.firstname); 
	clr;
	getsth("What is your last name?", now.lastname);
	clr;
	getsth("What letter grade do you deserve?", now.grade);
	clr;
	getsth("What is your age?", now.age);
	clr;
	std::cout << "Name: " << now.lastname << ", " << now.firstname << std::endl;
	std::cout << "Grade: " << now.grade + 1 << std::endl;
	std::cout << "Age: " << now.grade <<std::endl;
	return 0;
}