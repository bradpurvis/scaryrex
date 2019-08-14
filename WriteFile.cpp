//Brad Purvis
//COP2000.053
//write file

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	//program code goes here
	ofstream myoutputfile;
	//open file
	myoutputfile.open("Weekdays.txt");
	//use the file
	myoutputfile << "Monday\n";
	myoutputfile << "Tuesday\n";
	myoutputfile << "Wednesday\n";
	myoutputfile << "Thursday\n";
	myoutputfile << "Friday\n";
	//close file
	myoutputfile.close();
	cout << "Finished writting records\n";

	return 0;

}
