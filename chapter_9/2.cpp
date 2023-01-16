// static.cpp -- using a static local variable
#include <iostream>
#include <string>
// constants
const int ArSize = 10;

// function prototype
void strcount(std::string str);

int main()
{
    using namespace std;
    std::string input;
    cout << "Enter a line:\n";
    while (cin)
    {
        getline(cin,input);
        if(input.empty())
            break;
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        
    }
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(std::string str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable
    count = str.size();
    cout << "\"" << str <<"\" contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}