/** File name: bankAccount.h
*   Class for a bank account object
*   Written by Amer Qouneh, editted by Joshua Ryan.
*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount {
   private:
      string customerName;
      float balance;
      void setName(string n);
      void setBalance(float bal);
   public:
      BankAccount(string n, float bal);
      string getName();
      float getBalance();
      void deposit(float dep);
      void withdraw(float draw);
      ~BankAccount();
};
