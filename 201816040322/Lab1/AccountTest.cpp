// Lab 1: AccountTest.cpp
// Create and manipulate Account objects.
#include <iostream>
#include <stdexcept>
using namespace std;

// include definition of class Account from Account.h
#include "Account.h"

// function main begins program execution
int main()
{
   Account account1( 50 ); // create Account object
   Account account2( 0 ); // create Account object

   // display initial balance of each object
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   int withdrawalAmount; // stores withdrawal amount read from user

   cout << "\nEnter withdrawal amount for account1: "; // prompt
   cin >> withdrawalAmount; // obtain user input
   cout << "\nsubtracting " << withdrawalAmount
      << " from account1 balance\n\n";

    try
    {
        account1.debit(withdrawalAmount);/* write code to withdraw money from account1 */
    }
    catch(invalid_argument &e)
    {
        cout << e.what() <<endl;
    }

   // display balances
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   cout << "\nEnter withdrawal amount for account2: "; // prompt
   cin >> withdrawalAmount; // obtain user input
   cout << "\nsubtracting " << withdrawalAmount
      << " from account2 balance\n\n";

    try
    {
        account2.debit(withdrawalAmount);/* write code to withdraw money from account2 */
    }
    catch(invalid_argument &e)
    {
        cout << e.what() <<endl;
    }

   // display balances
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;
} // end main