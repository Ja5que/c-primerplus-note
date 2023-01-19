//main.cpp
 
#include"string2.h"
#include<iostream>
using namespace std;

int main()
{
	string2 s1(" and I am a C++ student.");
	string2 s2 = "Please enter your name: ";
	string2 s3;
	cout << s2;                     
	cin >> s3;                     
	s2 = "My name is " + s3;        
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();                  
	cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
		<< " 'A' characters in it.\n";
	s1 = "red";                 
	string2 rgb[3] = { string2(s1), string2("green"), string2("blue") };
	cout << "Enter the name of a primary color for mixing light: ";
	string2 ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();        
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])       
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Try again!\n";
	}
	cout << "Bye\n";
	system("pause");
	return 0;
}