
//Your name//COP2000.0XX (XX = your section number)
//Short description of what your project will do
#include "pch.h"
#include <iostream>
using namespace std;

int main()



{
	
		//program code goes here

	const int NUMDAYS = 7;
	float temp[NUMDAYS];
	float sumTemps = 0;

	//get user input

	for (int i = 0; i < NUMDAYS; i++)
	{
		cout << "Enter the high temp for day " << i + 1 << ": ";
		cin >> temp[i];
	}
	cout << endl << endl;

	//display output

	for (int j = 0; j < NUMDAYS; j++)
	{
		cout << "The high temp for day " << j + 1 << " was " << temp[j] << endl;
		sumTemps += temp[j];
	}
	cout << endl << endl;
	cout << "The average high temp for the week was " << sumTemps/NUMDAYS << endl;


	return 0;

}
