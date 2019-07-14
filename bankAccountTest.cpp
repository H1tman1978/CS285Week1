/*
	Program: bankAccount.cpp
	Author: Anthony Rolfe
	Organization: Grantham University
	Date: 7/11/2019

	Description: This file tests the bankAccount class created and defined in bankAccount.h as per the 
	Week 1 Assignment for CS285.
*/

#include <string>
#include <iostream>
#include "bankAccount.h"
#include <stdlib.h>


int main()
{
	//Variable declaration	
	std::string firstName, lastName;	//Used to create the full name for the myAccountHolder variable.
	bankAccount accountList[10];		//Array to store bank account data.
	bool enteringData = true;			//Control variable for while loop.
	char answer;						//Control variable for while loop.
	int counter = 0;					//Control variable to limit amount of data entered into array.
	
	//Variables for new account info
	std::string myAccountHolder, myAccountType;
	double myBalance, myInterestRate;
	//End of Variable Declaration

	//Allow user to enter up to 10 accounts
	while (enteringData)
	{
		//Input Data
		std::cout << "Please enter the new account holder's  first name:  ";
		std::cin >> firstName;		
		std::cout << "Please enter the new account holder's  last name:  ";
		std::cin >> lastName;
		myAccountHolder = firstName + " " + lastName;
		std::cout << "Please enter the new account type (Checking or Savings:)  ";
		std::cin >> myAccountType;
		std::cout << "Please enter the opening account balance:  $";
		std::cin >> myBalance;		
		std::cout << "Please enter the account's interest rate as a decimal (Ex. 1.2% = 0.012)  ";
		std::cin >> myInterestRate;		
		std::cout << "Please standby while we create a new account..." << std::endl;

		//Create new account and store it in the array
		bankAccount myAccount = bankAccount(myAccountHolder, myAccountType, myBalance, myInterestRate);
		accountList[counter] = myAccount;
		std::cout << "Account " << myAccount.getAccountNumber() << " created successfully!" << std::endl;
		counter += 1;  //Increment counter after successful account creation.
		if (counter == 9)
		{
			std::cout << "MAX ACCOUNT NUMBERS REACHED!! Unable to create another account." << std::endl;
			enteringData = false;
		}

		//Determine if user wants to create another account
		if (counter < 10)
		{
			std::cout << "Do you wish to create another account, y/n? ";
			std::cin >> answer;
			if (answer != 'y')
			{
				enteringData = false;
				system("CLS");
			}
			else
			{
				system("CLS");
			}
		}
	}

	//Print all Account Data	
	for (int i = 0; i < counter; i++)
	{
		accountList[i].print();
		std::cout << std::endl;
	}
}