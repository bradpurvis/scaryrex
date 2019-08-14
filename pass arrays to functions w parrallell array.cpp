
//Your name//COP2000.0XX (XX = your section number)
//Short description of what your project will do
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

//prototypes
void getinput(float[], string[], int NUMDAYS);
void display(float[], string[], int NUMDAYS); 


int main()

{  
	
	//program code goes here 
	
	//variables
	const int NUMDAYS = 7;
	float temp[NUMDAYS];
	string weekdays[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday", "Saturday" };
	//get user input
	getinput(temp, weekdays, NUMDAYS);
	cout << endl << endl;
	//display output
	display(temp, weekdays, NUMDAYS);
	
	
	
	
	return 0; 

}

void getinput(float temp[], string weekdays[], int NUMDAYS)
{
	for (int i = 0; i < NUMDAYS; i++)
	{
		cout << "Enter thet high temp for " << weekdays[i] << ": ";
		cin >> temp[i];
	}
}

void display(float temp[], string weekdays[], int NUMDAYS)
{
	float sumtemps = 0;
	for (int i = 0; i < NUMDAYS; i++)
	{
		cout << "The high temp for " << weekdays[i] << " was " << temp[i] << endl;
		sumtemps += temp[i];
	}
	cout << endl << endl;
	cout << "The average temp for the week was " << sumtemps / NUMDAYS << endl;
}