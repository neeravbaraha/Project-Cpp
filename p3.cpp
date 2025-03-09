// Create a BankAccount class that encapsulate account detail (balance ) and allows only deposit and withdrawl operation

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    // constructor to intialize balance
    BankAccount(double intialBalance)
    {
        balance = intialBalance;
    }

    // getter to access balance

    double getBalance()
    {
        return balance;
    }

    // deposite method
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    void withdrawl(double amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
        }
    }
};

int main()
{
    BankAccount account(1000);
    cout << "Initial Balance: " << account.getBalance();

    account.deposit(500);
    cout << "AfterDeposite: " << account.getBalance();

    account.withdrawl(300);
    cout << "After withdrawl" << account.getBalance();

    return 0;
}