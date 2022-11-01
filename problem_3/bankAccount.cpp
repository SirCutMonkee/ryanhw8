/** File name: bankAccount.cpp
*
*   Class for a bank account object
*   Written by Joshua Ryan
*/

#include"bankAccount.h"

BankAccount::BankAccount(string n, float bal){
   customerName = n;
   balance = bal;
}

void BankAccount::setName(string n){
   customerName = n;
}

void BankAccount::setBalance(float bal){
   balance = bal;
}

string BankAccount::getName(){
   return customerName;
}

float BankAccount::getBalance(){
   return balance;
}

void BankAccount::deposit(float dep){
   balance+=dep;
}

void BankAccount::withdraw(float draw){
   balance-=draw;
}

BankAccount::~BankAccount(){
   cout << "Destroying bank account of " << customerName << endl;
}
