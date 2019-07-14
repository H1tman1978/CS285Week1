/*	
	Program Name: bankAccount.h
	Author: Anthony Rolfe (arolfe@grantham.edu)
	Organization: Grantham University
	Date: 7/11/2019

	Description: As part of the CS285 Week 1 Assigment, this header file defines the 
	bankAccount class. The implementation of the bankAccount class can be found in 
	the bankAccount.cpp file. NOTE: Both files are required for successful implementation
	of the bankAccount class. This file can be imported using the following code:
	#include "bankAccount.h";
*/

#include <string>
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class bankAccount
{
public:

	bankAccount();
		//Generic Constructor method to create a new bank account with default values.
		//Postcondition:			A new 'bankAccount' object is created and returned.
	bankAccount(std::string name, std::string type, double openingBalance, double rate);
		//Constructor method to create a new bank account with data from the parameters.
		//Postcondition:			A new 'bankAccount' object is created and returned.
		//							The method will validate all data prior to object creation.
	void deposit(double amount);
		//Function to add a deposit to the account balance
		//The account balance is increased by the parameter 'amount'
		//Postcondition:			bankAccount.balance += amount;
		//							The function checks whether the value of 
		//							'amount' is valid (i.e. is positive)
	void withdraw(double amount);
		//Function to add a withdrawl to the account balance.
		//The account balance is decreased by the parameter 'amount'
		//Postcondition:			bankAccount.balance -= amount;
		//							The function checks whether the value of 
		//							'amount' is valid (i.e. is positive)
	double getInterest();
		//Function to obtain the current interest rate of the account
		//Postcondition:			The value of bankAccount.interestRate is returned.
	void updateBalance();
		//Function to update the Account Balance with the interest generated from the account.
		//Postcondition:			The 'interest' paramater is added to bankAccount.balance.
		//							The function also tests for a valid value for 'interest'.
	void print() const;
		//Function prints all the current account information.
		//Postcondition:			Displays accountHolderName, balance, accountType and   
		//							interestRate in a formatted manner on the console.
	int getAccountNumber();
		//Function obtains the Account Number.
		//Postcondition:			The value of bankAccount.accountNumber is returned.
	std::string getAccountHolderName();
		//Function obtains the Account Holder's Name.
		//Postcondition:			The value of bankAccount.accountHolderName is returned.
	std::string getAccountType();
		//Function obtains the accountType data.
		//Postcondition:			The value of bankAccount.accountType is returned.
	double getBalance();
		//Function obtains the current balance of the account.
		//Postcondition:			The value of the bankAccount.balance is returned.
	double getInterestRate();
		//Function obtains the current interest rate of the account.
		//Postcondition:			The value of the bankAccount.balance is returned.

private:
	std::string accountHolderName;	//Variable for storing the account holder's name.
	std::string accountType;		//Variable for storing the account's type (Checking or Savings.)
	int accountNumber;				//Variable for storing the account number
	double balance;					//Variable for storing the balance of the account
	double interestRate;			//Variable for storing the interest rate (as a decimal. Ex. 9.2% would be 0.092.)
	static int nextAccountNumber;	//Static Variable for storing the next available account number.
};

#endif // !BANKACCOUNT_H