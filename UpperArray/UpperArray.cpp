// Jonathan Vertiz
// ITSE 1307
// convert array to upper case
// UpperArray.cpp : Takes in a string and outputs it in an array in caps.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare the array name and spacing
	char chrString[16];

	//output to the user to enter the string and take in the data
	cout << "Please enter a string of characters to be conerted to uppercase.";
	cin.getline(chrString, 16);
	//Prints out the array in upper case
	for (int i = 0; chrString[i]!='\0'; i++)
	{
		chrString[i] = toupper(chrString[i]);
		cout << chrString[i] << endl;
	}

    return 0;
}

