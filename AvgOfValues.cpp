/*
Student Name:  Arianna Bikombe
Date: February 4, 2021
Lab Assignment: Lab 01-Ch2Intro
Project Name: Lab01-02-AvgOfValues
Description: Calculates the tax and tip on a meal and displays results
Limitations or issues:	All the input is hard coded with no opportunity for the user to make changes.
Credits: Not Applicable
*/

#include <iostream>
using namespace std;

int main()
{
    // Print out your name and course
	cout << "Arianna Bikombe" << endl;
	cout << "CSCI175N\n" << endl;
	
	double n1 = 28;
	double n2 = 32;
	double n3 = 37;
	double n4 = 24;
	double n5 = 33;
	double sum = n1 + n2 + n3 + n4 + n5;

	cout << "This program calculates the average of 5 numbers." << endl << endl; 

	cout << "The sum of the five numbers is: " << sum << endl; 
	cout << "The average of the five numbers is: " << sum / 5 << endl; 

	// This code pauses the program so instructor can grade
	system("pause");


	return 0; 
}

/*

Proof:

Arianna Bikombe
CSCI175N

This program calculates the average of 5 numbers.

The sum of the five numbers is: 154
The average of the five numbers is: 30.8
Press any key to continue . . .

*/