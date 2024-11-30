#include <iomanip>
#include <iostream>

// class for a deposit account
//   at a bank
class Account {
public:
  Account(double balance);
  void deposit(double amount);
  virtual bool withdraw(double amount);
  double getBalance() const { return balance; }

private:
  double balance = 0;
};

// class for a savings account
class Savings : public Account {
public:
  Savings(double balance, double rate);
  void setRate(double rate);
  void newMonth();
  int getWithdrawls() const { return numWithdrawls; }

private:
  double rate;
  int numWithdrawls;
};

void testAccount(Account &toTest) {
  std::cout << std::fixed << std::showpoint << std::setprecision(2)
            << "Initial Balance: $" << toTest.getBalance() << std::endl;
  toTest.deposit(50);
  std::cout << "After $50 Deposit: $" << toTest.getBalance() << std::endl;
  for (int i = 0; i < 10; i++) {
    if (toTest.withdraw(10)) {
      std::cout << "Successfully withdrew $10.00" << std::endl;
    } else {
      std::cout << "Failed to withdraw $10.00" << std::endl;
    }
  }
  std::cout << "Final Balance: $" << toTest.getBalance() << std::endl;
}

int main() {
  Account checking(100);
  Savings savings(80, 0.01);

  std::cout << "Checking Test:" << std::endl << "==============" << std::endl;
  testAccount(checking);

  std::cout << std::endl
            << "Savings Test:" << std::endl
            << "=============" << std::endl;
  testAccount(savings);
  std::cout << "-> New Month <-" << std::endl;
  savings.newMonth();
  testAccount(savings);
}

/**************************************/

Account::Account(double balance) { this->balance = balance; }

void Account::deposit(double amount) { balance += amount; }

bool Account::withdraw(double amount) {
  if (amount <= this->balance) {
    this->balance -= amount;
    return true;
  } else {
    return false;
  }
}

Savings::Savings(double balance, double rate) : Account(balance) {
  this->rate = rate;
  this->numWithdrawls = 0;
}

void Savings::setRate(double rate) { this->rate = rate; }

void Savings::newMonth() {
  this->numWithdrawls = 0;
  this->deposit(this->getBalance() * this->rate);
}
