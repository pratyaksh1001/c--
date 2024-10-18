#include <iostream>
#include <stdexcept>
using namespace std;

class account{
    private:
    double balance;
    public:
    account(double x):balance(x){}
    void withdraw(int x){
        try{
            if(x<=0){
                throw invalid_argument("error");
            }
            else{
                balance-=x;
            }
        }
        catch(exception e){
            cout<<"the withdraw amount must be positive"<<endl;
        }
    }
    void deposit(int x){
        try{
            if(x<=0){
                throw invalid_argument("error");
            }
            else{
                balance+=x;
            }
        }
        catch(exception e){
            cout<<"the deposit amount must be positive"<<endl;
        }
    }
    void getbalance(){
        cout<<"balance is: "<<balance<<endl;
    }
};

int main(){
    account a1(1000);
    a1.deposit(-10);
    a1.deposit(10);
    a1.withdraw(-100);
    a1.withdraw(1);
    a1.getbalance();    
}
/*
You are tasked with implementing a Savings Account Management System in C++. The system should allow users to create accounts, deposit money, withdraw money, and view their account balance. Ensure that all operations handle invalid inputs and potential errors using exceptions.

Requirements:
Class Definition:

Create a class named SavingsAccount that contains:
A private double member variable balance to hold the account balance.
A constructor that initializes balance to zero.
A method createAccount() that:
Initializes the balance to an amount specified by the user.
Throws an invalid_argument exception with the message "Initial Deposit Must Be Positive" if the amount is less than or equal to zero.
A method deposit(double amount) that:
Accepts a deposit amount.
Throws an invalid_argument exception with the message "Invalid Deposit Amount" if the amount is less than or equal to zero.
Adds the deposit amount to balance if valid.
A method withdraw(double amount) that:
Accepts a withdrawal amount.
Throws an invalid_argument exception with the message "Invalid Withdrawal Amount" if the amount is less than or equal to zero.
Throws a runtime_error with the message "Insufficient Funds" if the withdrawal amount exceeds balance.
Subtracts the withdrawal amount from balance if valid.
A method getBalance() that returns the current balance.
Main Function:

In the main function:
Create an instance of SavingsAccount.
Implement a menu-driven interface that allows the user to:
Create an account with an initial deposit.
Deposit money.
Withdraw money.
View the account balance.
Exit the program.
*/