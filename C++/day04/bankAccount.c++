#include<iostream>
#include<string>
using namespace std;

class BankAccount {
    private:
    string accountHolder;
    int accountNumber;
    double balance;
  
    public:
    BankAccount(string name, int acNo, double initialBalance) {
    this->accountHolder = name;
    this->accountNumber = acNo;
    this->balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout<<"\n Deposited: "<<amount;
    }

    void withdraw(double amount) {
        if(amount>balance) {
            cout<<"\n Insufficient Balance...";
        }
        else {
            balance -= amount;
            cout<<"\n Withdrawn: "<<amount;
        }
    }

    void display() {
        cout<<"\n - - - Account Details - - - ";
        cout<<"\n Account Holder: "<<accountHolder;
        cout<<"\n Account Number: "<<accountNumber;
        cout<<"\n Balance: "<<balance;
    }
};

int main() {
    BankAccount account("Tejas", 12345, 1000);
    account.deposit(500);
    account.withdraw(300);
    account.display();

    return 0;
}