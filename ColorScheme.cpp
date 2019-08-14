
//Brad Purvis
//COP2000.053  
//Prompt user to select two colors and output color mix result 
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;




int main()
{

	string choice1,																							//Variables defined
		choice2;
	
	//program code goes here

	cout << "Enter one of the following: red, blue, or yellow. \n";											//Ask user to pick choice one
	cin >> choice1;																							//Gather user input
	cout << "\nEnter one of the other two colors you have not selected: \n";								//Ask user to pick choice two	
	cin >> choice2;																							//Gather user input
	if (choice1 == "blue" && choice2 == "yellow" || choice1 == "yellow" && choice2 == "blue")				//condition for green
	{
		cout << "\nYour color mix makes green.\n";
	}
	else if (choice1 == "blue" && choice2 == "red" || choice1 == "red" && choice2 == "blue")				//condition for purple	
	{
		cout << "\nYour color mix makes purple.\n";
	}
	else if (choice1 == "yellow" && choice2 == "red" || choice1 == "red" && choice2 == "yellow")			//condition for orange
	{
		cout << "\nYour color mix makes orange.\n";
	}
	else
	{
		cout << "\n**Invalid entry: use lower case red, blue, or yellow.**\n"; 								//prompt user to follow instructions
		cout << "**Do not use the same color twice.**\n";
	}
	return 0;






}

