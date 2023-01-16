#include <cctype>
#include <cstring>
#include <iostream>
#include <string>
#define clr std::cout << std::endl;

struct student {
    std::string lastname, firstname;
    char grade;
    int age;
};

template <typename T>
void getsth(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    std::cin >> now;
    return;
};
class BankAccount {
   private:
    std::string name;
    std::string account;
    double balance;

   public:
    BankAccount(const std::string &client, const std::string &num,
                double bal = 0.0){
                name = client;
                account = num;
                balance = bal;
                };
    void show(void) const{
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account: " << account << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    };
    void deposit(double cash){
        balance += cash;
    };
    void withdraw(double cash){
        balance -= cash;
    };
};

int main(){
    BankAccount one("John", "123456789", 1000);
    BankAccount two("Mary", "987654321");
    one.show();
    one.deposit(100);
    one.show();
    one.withdraw(200);
    one.show();
    two.show();
    two.deposit(300);
    two.show();
    two.withdraw(400);
    two.show();
    return 0;    
}