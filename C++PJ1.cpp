#include <iostream>
#include <string>
class BankAccount {
  private: std::string accountNumber;
  double balance;
public:
    BankAccount(const std::string & accNum, double initialBalance): accountNumber(accNum),
  balance(initialBalance) {}
void deposit(double amount) {
    balance += amount;
    std::cout << "Deposit successfully completed. Current balance: " << balance << std::endl;
  }
void withdraw(double amount) {
    if (amount <= balance) {
      balance -= amount;
      std::cout << "Withdrawal successfully completed. Current balance: " << balance << std::endl;
    } else {
      std::cout << "Sorry!Insufficient balance. You Cannot withdraw money." << std::endl;
    }
  }
};
int main() {
  std::string sacno = "SB-1324";
  double Opening_bal, deposit_amt, withdrawal_amt;
  Opening_bal = 1000;
  std::cout << "A/c. No." << sacno << " Balance: " << Opening_bal << std::endl;
  BankAccount account(sacno, 1000.0);
  deposit_amt = 900;
  std::cout << "Deposit Amount: " << deposit_amt << std::endl;
  account.deposit(deposit_amt);
  withdrawal_amt = 650;
  std::cout << "Withdrawl Amount: " << withdrawal_amt << std::endl;
  account.withdraw(withdrawal_amt);
  withdrawal_amt = 2100;
  std::cout << "Attempt to withdrawl Amount: " << withdrawal_amt << std::endl;
  account.withdraw(withdrawal_amt);
  std::cout<<"Program done by KAMALI.S(CSE-B)"<<std::endl;
return 0;
}


