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
class Grades
{
private:
	int counterArray[GRADEOUT];
	ifstream inputfile;
	int file;
public:
	Grades();
	void openFile(string);
	void readfile(int counts[GRADEOUT], int);
	void testFile();
	void closefile();
	void displayGrades(int);
};

int main()
{
	//variables
	Grades AtoF;
	
	int grader[GRADEOUT];
	int graders =0;
	int total = 0;
	
	//call functions
	
	AtoF.openFile("grades-1.txt");
	AtoF.testFile();
	AtoF.readfile(grader,total);
	AtoF.closefile();
	AtoF.displayGrades(graders);
		
	return 0;
}
//*************************
//CONSTRUCTOR			  *
//*************************
Grades::Grades()
{
	int file = 0;
	const int GRADEOUT = 5;
}
//***************************
//Open file	function		*
//***************************
void Grades::openFile(string data)
{
	inputfile.open(data);
}
//***************************
//READ FILE				    *
//***************************
void Grades::readfile(int counts[GRADEOUT], int total)
{
	cout << "Reading the file\n\n";
	while (inputfile >> file && file > EOF)
	
				if (file >= 90 && file <= 100)
				{
					counterArray[0]++;
				}
				else if (file >= 80 && file <= 89)
				{
					counterArray[1]++;
				}
				else if (file >= 70 && file <= 79)
				{
					counterArray[2]++;
				}
				else if (file >= 60 && file <= 69)
				{
					counterArray[3]++;
				}
				else if (file < 60)
				{
					counterArray[4]++;
				}
	
		cout << "Finished reading records\n\n";

}
//***************************
//TEST FILE					*
//***************************
void Grades::testFile()
{
	if (!inputfile)
	{
		cout << "file did not open" << endl;
		exit(10);
	}
}
//****************************
//CLOSE FILE				 *
//****************************
void Grades::closefile()
{
	inputfile.close();
}
//*****************************
//DISPLAY GRADE RANGE		  *
//*****************************
void Grades::displayGrades(int grades)
{
	cout << "The total count of grade A: " << counterArray[0] << endl;
	cout << "The total count of grade B: " << counterArray[1] << endl;
	cout << "The total count of grade C: " << counterArray[2] << endl;
	cout << "The total count of grade D: " << counterArray[3] << endl;
	cout << "The total count of grade F: " << counterArray[4] << endl << endl;
}
