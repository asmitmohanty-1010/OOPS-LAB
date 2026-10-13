#include <iostream>
using namespace std;

class Ledger {
public:
    double balance;

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Ledger {
public:
    void calculateInterest() {
        cout << "Interest: " << balance * 0.05 << endl;
    }
};

class CheckingAccount : public Ledger {
public:
    void showType() {
        cout << "Account Type: Checking" << endl;
    }
};

int main() {
    SavingsAccount s;
    s.balance = 10000;
    s.showBalance();
    s.calculateInterest();

    CheckingAccount c;
    c.balance = 5000;
    c.showBalance();
    c.showType();

    return 0;
}
