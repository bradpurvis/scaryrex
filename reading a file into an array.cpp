//Brad Purvis
//COP2000.053
//Read class grade file and display total for each letter grade
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


const int GRADEOUT = 5;
class ReadingArray
{
public:
	void openFile(string d);
	void readFile(int data);
	void testFile();
	ReadingArray();


private:
	ifstream inputfile;
	int arrayCount[GRADEOUT];

};

int main()
{
	
	ReadingArray totals;
	int data = 0;;

	

	totals.openFile("grades-1.txt");
	totals.testFile();
	totals.readFile(data);



	return 0;

}

void ReadingArray::openFile(string data)
{
	inputfile.open(data);
}

void ReadingArray::readFile(int data)
{
	int file = 0;
	int i = 0;
	
	cout << "Now reading the file... " << endl;
	//while (inputfile >> file)
	
		for (int i = 0; i < 34; i++)
		{
			inputfile >> arrayCount[i];
			cout << arrayCount[i] << endl;
		
		}
	//cout << arrayCount[0];
	//{
		//arrayCount[i] = file;
		//cout << arrayCount[i] << endl;
		//arrayCount[file]++;

	//}

	//cout << arrayCount[0];
	
}
ReadingArray::ReadingArray()
{
	
	//const int GRADEOUT = 5;
}

void ReadingArray::testFile()
{
	if (!inputfile)
	{
		cout << "file did not open" << endl;
		exit(10);
	}
}