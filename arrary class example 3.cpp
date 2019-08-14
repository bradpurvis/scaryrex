
//Your name//COP2000.0XX (XX = your section number)
//Short description of what your project will do
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
const int NUMDAYS = 7;

class temperatures
{
private:
	float temps[NUMDAYS];
	string weekdays[NUMDAYS];
public:
	void setweekdays(string[NUMDAYS]);
	void settemps(float[NUMDAYS], string[NUMDAYS]);
	void displayhightemps(float[NUMDAYS], string[NUMDAYS]);

};

void temperatures::setweekdays(string wd[NUMDAYS])
{
	for (int i = 0; i < NUMDAYS; i++)
	{
		weekdays[i] = wd[i];
	}
}
void temperatures::settemps(float t[NUMDAYS], string wd[NUMDAYS])
{
	for (int i = 0; i < NUMDAYS; i++)
	{
		cout << "Enter the high temp for " << wd[i] << ": ";
		cin >> t[i];
	}
}

void temperatures::displayhightemps(float t[NUMDAYS], string wd[NUMDAYS])
{
	float sumtemps = 0;
	for (int i = 0; i < NUMDAYS; i++)
	{
		cout << "The high temp for " << wd[i] << " was " << t[i] << endl;
		sumtemps += t[i];
	}
	cout << endl << endl;
	cout << "The average temp for the week was " << sumtemps / NUMDAYS << endl;
}

int main()
{
	string daysoftheweek[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	float hightemps[NUMDAYS];
	temperatures T;													//INSTANTIATING THE CLASS 

	T.setweekdays(daysoftheweek);
	cout << "Days of the week have been set" << endl;
	system("pause");
	cout << endl;

	T.settemps(hightemps, daysoftheweek);
	cout << endl;

	T.displayhightemps(hightemps, daysoftheweek);
	   	  
	return 0;
}