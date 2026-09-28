// Program 13: Friend Class
// Aim: Demonstrate access to private data through a friend class.
#include <iostream>

class Account {
private:
    double balance;
    friend class Auditor;                   // Auditor may access private members
public:
    explicit Account(double initialBalance) : balance(initialBalance) {}
};

class Auditor {
public:
    void inspect(const Account& account) const {
        std::cout << "Account Balance: " << account.balance << '\n';
    }
};

int main() {
    Account account(5000.0);
    Auditor auditor;
    auditor.inspect(account);
    return 0;
}
