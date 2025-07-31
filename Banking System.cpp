#include <iostream>
#include <windows.h>
using namespace std;

class Account {
private:
    string name;
    int accNumber;
    float balance;

public:
    void createAccount() {
        system("cls");
        cout << "=========================\n";
        cout << "     CREATE ACCOUNT\n";
        cout << "=========================\n";
        cout << "Name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Account Number: ";
        cin >> accNumber;
        cout << "Opening Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        system("cls");
        cout << "--- DEPOSIT ---\n";
        cout << "Amount: ";
        cin >> amount;
        balance += amount;
        cout << "Deposited Successfully!\n";
        system("pause");
    }

    void withdraw() {
        float amount;
        system("cls");
        cout << "--- WITHDRAW ---\n";
        cout << "Amount: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn Successfully!\n";
        } else {
            cout << "Insufficient balance!\n";
        }
        system("pause");
    }

    void display() {
        system("cls");
        cout << "--- ACCOUNT INFO ---\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
        system("pause");
    }
};

int main() {
    Account acc;
    int choice;

    acc.createAccount();

    do {
        system("cls");
        cout << "\n====== BANK MENU ======\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. View Account Info\n";
        cout << "4. Exit\n";
        cout << "=======================\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: acc.deposit(); break;
            case 2: acc.withdraw(); break;
            case 3: acc.display(); break;
            case 4: cout << "Thank you!\n"; Sleep(500); break;
            default: cout << "Invalid choice!\n"; Sleep(800);
        }
    } while (choice != 4);

    return 0;
}

