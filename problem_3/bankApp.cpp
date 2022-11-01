/** File name: bankApp.cpp
*
*   Written by Joshua Ryan
*/

#include"bankAccount.h"

int main(void){
   cout << "Creating an account for Jack Smith with $50 in it." << endl;
   BankAccount jackAccount("Jack Smith",50);

   cout << "Creating an account for Jill Brian with $100 in it." << endl;
   BankAccount jillAccount("Jill Brian",100);

   cout << "Creating bank account array." << endl;
   cout << "Creating an account for Ralph Kramden with $10 in it." << endl;
   cout << "Creating an account for Alice Kramden with $20 in it." << endl;
   cout << "Creating an account for Ed Norton with $30 in it." << endl;
   BankAccount bankArray[3] = {BankAccount("Ralph Kramden", 10), BankAccount("Alice Kramden",20), BankAccount("Ed Norton",30)};

   cout << "Depositing $30 in everyone's account." << endl;
   jackAccount.deposit(30);
   jillAccount.deposit(30);
   for(int i = 0 ; i<=2 ; i++){
      bankArray[i].deposit(30);
   }

   cout << "Withdrawing $20 from everyone's account." << endl;
   jackAccount.withdraw(20);
   jillAccount.withdraw(20);
   for(int i = 0 ; i<=3 ; i++){
      bankArray[i].withdraw(20);
   }

   cout << "Current balance for each account holder:" << endl;
   cout << jackAccount.getName() << ": " << jackAccount.getBalance() << endl;
   cout << jillAccount.getName() << ": " << jillAccount.getBalance() << endl;
   for(int i = 0 ; i<=2 ; i++){
      cout << bankArray[i].getName() << ": " << bankArray[i].getBalance() << endl;
   }
return 0;
}
