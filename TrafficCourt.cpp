//Brad Purvis
//COP2000.053
//Determine traffic court costs for a speed violation

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()

{
	string firstLastName,
		socialSec;

	double speedLimit,
		overLimit,
		actualSpeed,
		ticketCost,
		costPerMile,
		totalCost;

	const float COURTCOST = 95;

	//Program code
	cout << "Traffic Court" << endl << endl;
	cout << "Offender's first and last name: ";											//Get violators name
	getline(cin, firstLastName);														//Display violators name
	cout << "Offender's Social Security Number: ";										//Get violators SSN 
	getline(cin, socialSec);															//Display violators SSN
	cout << "\nEnter the speed limit(mph): ";											//Get speed limit
	cin >> speedLimit;																	//Display speed limit
	cout << "Offender's Speed(mph): ";													//Get violators actual speed
	cin >> actualSpeed;																	//Display violators actual speed
	overLimit = actualSpeed - speedLimit;												//Calculate exceeded speed
	cout << endl << firstLastName << " was traveling ";									//Display name with exceeded speed
	cout << overLimit << " miles over the speed limit." << endl;						//Display name with exceeded speed
	ticketCost = overLimit * 25;														//Calculate ticket cost
	cout << fixed << showpoint << setprecision(2) << "Cost of ticket: $" << ticketCost; //Display ticket cost
	cout << "\nCourt costs: $" << COURTCOST << endl;									//Display ticket cost
	totalCost = COURTCOST + ticketCost;													//Calculate total cost of ticket
	cout << "\nTotal due for " << firstLastName << ": $" << totalCost << endl;			//Display name with total ticket cost


	return 0;
}