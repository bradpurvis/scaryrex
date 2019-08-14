//Brad Purvis
//COP2000.053
//Read a data file, sort the file names in alpabetical order, and display names.
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int TOTAL = 20;

class Names
{
private: 
	fstream inputfile;
	string nameArray[TOTAL];
	string 	nameswap;
	bool outoforder;
	int file;
public:
	Names();										//constructor
	void filemaintenance(string);
	void arraysort(string sort1[TOTAL]);
	void display(string disp[TOTAL]);
	void closefile();
};

int main()
{
	Names T;
	string sort[TOTAL];
	string	disp[TOTAL];
	
	T.filemaintenance("students.txt");
	T.closefile();
	T.arraysort(sort);
	T.display(disp);

	return 0;
}
//**************************************
//constructor definition               *
//**************************************
Names::Names()
{
	file = 0;
}
		
//**************************************
//file maintenance		               *
//**************************************
void Names::filemaintenance(string name1)
{
	inputfile.open(name1);								//open file
	if (!inputfile)
	{
		cout << "file did not open";
		exit(10);
	}
	cout << "Reading the file.\n";
	while (!inputfile.eof())
	{
		for (int count = 0; count < TOTAL; count++)
			inputfile >> nameArray[count];
	}
 
}

//**************************************
//sort the array		               *
//**************************************
void Names::arraysort(string sort1[TOTAL])
{	
	do
	{
		outoforder = false;
		for (int i = 0; i < (TOTAL - 1); i++)			
		{
			if (nameArray[i] > nameArray[i + 1])		//if out of order and needs to be exchanged 
			{
				outoforder = true;				
				nameswap = nameArray[i];				
				nameArray[i] = nameArray[i + 1];
				nameArray[i + 1] = nameswap;
			}
		}
	} while (outoforder);								//loop again if the array was out of order on this pass
	
	
}
//**************************************
//display the array		               *
//**************************************
void Names::display(string disp[TOTAL])
{
	cout << "Names in alphabetical order: \n\n";
	for (int i =0; i < TOTAL; i++)
	{
		cout << nameArray[i] << endl;
	}
}
//****************************
//CLOSE FILE				 *
//****************************
void Names::closefile()
{
	inputfile.close();
	cout << "The file is closed.\n\n\n";
}