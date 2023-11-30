#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
   
    BankAccount(const std::string& holder, double initialBalance = 0) : accountHolder(holder), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    double getBalance() const {
        std::cout << "Balance for " << accountHolder << ": $" << balance << std::endl;
        return balance;
    }
};

int main() {
    std::string accountHolder;
    double initialBalance;

    std::cout << "Enter account holder's name: ";
    std::getline(std::cin, accountHolder);

    std::cout << "Enter initial balance: $";
    std::cin >> initialBalance;

    BankAccount account(accountHolder, initialBalance);

    double depositAmount, withdrawAmount;

    std::cout << "Enter deposit amount: $";
    std::cin >> depositAmount;

    account.deposit(depositAmount);

    std::cout << "Enter withdrawal amount: $";
    std::cin >> withdrawAmount;

    account.withdraw(withdrawAmount);

    account.getBalance();
    std::cout<<"Program by Monikasree R,CSE-B"<<std::endl;

    return 0;
}