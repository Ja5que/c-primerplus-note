#include<iostream>
#include<string>

void proc1(){
	std::cout << "Three blind mice" << std::endl;
}

void proc2(){
	std::cout << "See how they run" << std::endl;
}

int main()
{
	proc1();
	proc1();
	proc2();
	proc2();
	return 0;
}