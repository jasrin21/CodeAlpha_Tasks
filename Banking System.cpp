#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Transaction class
class Transaction {
public:
    string type;
    double amount;
    string description;

    Transaction(string type, double amount, string description) {
        this->type = type;
        this->amount = amount;
        this->description = description;
    }

    void displayTransaction() {
        cout << type << ": " << amount << " - " << description << endl;
    }
};

// Account class
class Account {
public:
    int accountNumber;
    double balance;
    vector<Transaction> transactionHistory;

    Account(int accountNumber, double initialBalance) {
        this->accountNumber = accountNumber;
        this->balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        transactionHistory.push_back(Transaction("Deposit", amount, "Deposit into account"));
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
            return;
        }
        balance -= amount;
        transactionHistory.push_back(Transaction("Withdrawal", amount, "Withdrawal from account"));
        cout << "Withdrawal successful. New balance: " << balance << endl;
    }

    void transfer(double amount, Account& recipientAccount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
            return;
        }
        balance -= amount;
        recipientAccount.balance += amount;
        transactionHistory.push_back(Transaction("Transfer", amount, "Transfer to account " + to_string(recipientAccount.accountNumber)));
        recipientAccount.transactionHistory.push_back(Transaction("Transfer", amount, "Transfer from account " + to_string(accountNumber)));
        cout << "Transfer successful. New balance: " << balance << endl;
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void displayTransactionHistory() {
        cout << "Transaction History:" << endl;
        for (Transaction transaction : transactionHistory) {
            transaction.displayTransaction();
        }
    }
};

// Customer class
class Customer {
public:
    string name;
    vector<Account> accounts;

    Customer(string name) {
        this->name = name;
    }

    void addAccount(Account account) {
        accounts.push_back(account);
    }

    void displayCustomerInfo() {
        cout << "Customer Name: " << name << endl;
        cout << "Accounts:" << endl;
        for (Account account : accounts) {
            account.displayAccountInfo();
        }
    }
};

int main() {
    Customer customer("John Doe");
    Account account1(12345, 1000.0);
    Account account2(67890, 500.0);

    customer.addAccount(account1);
    customer.addAccount(account2);

    customer.displayCustomerInfo();

    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.transfer(300.0, account2);

    account1.displayAccountInfo();
    account1.displayTransactionHistory();
    account2.displayAccountInfo();
    account2.displayTransactionHistory();

    return 0;
}