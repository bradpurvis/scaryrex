//Brad Purvis
//COP2000.053
//read file

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string dayofweek;
	ifstream myinputfile;
	myinputfile.open("Weekdays.txt");

	if (!myinputfile) //file did not open
	{
		cout << "File did not open" << endl;
		return 10;
	}

	//loop thru file reading data records
	cout << "Reading data records\n\n";
	while (myinputfile >> dayofweek)
		cout << dayofweek << endl;

	cout << "\nFinished reading records\n";
	myinputfile.close();



	return 0;

}