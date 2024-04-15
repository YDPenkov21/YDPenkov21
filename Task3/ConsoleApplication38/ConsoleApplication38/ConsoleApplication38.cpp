#include <iostream>
#include <cstring>
using namespace std;
class BankAccount {
private:
    char clientName[24];
    char accountNumber[16];
    double balance;

public:

    BankAccount(const char* name, const char* accNumber, double initialBalance) {
        clientName[23] = '\0';
        accountNumber[15] = '\0';
        balance = initialBalance;
    }
    void displayAccount() {
        cout << "Client Name: " << clientName << std::endl;
        cout << "Account Number: " << accountNumber << std::endl;
        cout << "Balance: " << balance << std::endl;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successfully completed." << std::endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successfully completed." << std::endl;
        }
        else {
            cout << "Insufficient balance for withdrawal." << std::endl;
        }
    }
};

int main() {
    BankAccount account("John Doe", "123456789012345", 1000.0);
    cout << "Initial Account Details:" << std::endl;
    account.displayAccount();
    account.deposit(500.0);
    account.withdraw(200.0);
    cout << "\nUpdated Account Details:" << std::endl;
    account.displayAccount();
    return 0;
}