#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
public:
    string name;
    int balance;

    void withdraw(int amount){
        balance = balance - amount;
cout<< name << " has withdrawn $" << amount << endl;
    }

    void deposit(int amount){
        balance = balance + amount;
        cout<< name << " has deposited $" << amount << endl;    
    }

    void print(){
        cout<< name << " has a balance of $" << balance << endl;
    }
};


int main(){
    BankAccount account1;
    account1.name = "Lucia";
    account1.balance = 20;

    account1.print();

    BankAccount account2;
    account2.name = "Mellissa";
    account2.balance = 100;

    account2.print();

    account2.withdraw(23);

    account2.print();

    account1.deposit(50);
    account1.print();


    return 0;
}
