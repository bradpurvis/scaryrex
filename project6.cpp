//Brad Purvis
//COP2000.053
//This program will read a text file, calculate the average rainfall from the file
//and display the average rainfall for june. 

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
//Define Rain class 
class Rain
{
private:
	ifstream inRain;
	float sumRain;
	float avgRain;
	
public:						//member functions prototypes
	Rain();					//constructor
	void openfile(string);
	void testFile();
	void readfile();
	void closefile();
	void calcAvg(float &s);
	void display(float a);
};

int main()
{

	//program code
	//variables
	ifstream inputFile;
	float sumRain;
	float total;

	Rain myfile;						//instantiating and constructor
	myfile.openfile("JuneRain.txt");
	myfile.testFile();
	myfile.readfile();
	myfile.calcAvg(total);
	myfile.display(total);
	myfile.closefile();
	return 0;
}
//rain constructor
Rain::Rain()
{
	sumRain = 0.0;
	avgRain = 0.0;
}
//****************************
//OPEN FILE					 *
//****************************
void Rain::openfile(string data)
{
	inRain.open(data);
}
//***************************
//READ FILE				    *
//***************************
void Rain::readfile()
{
	cout << "Reading the file\n\n";
	float file = 0;
	while (inRain >> file)
	{
		sumRain += file;
	}
	cout << "finished reading records\n";

}
//***************************
//TEST FILE					*
//***************************
void Rain::testFile()
{
	if (!inRain)
	{
		cout << "file did not open" << endl;
		exit(10);
	}
}
//****************************
//CLOSE FILE				 *
//****************************
void Rain::closefile()
{
	inRain.close();
}
//*****************************
//CALCULATE AVERAGE			  *
//*****************************
void Rain::calcAvg(float &sum)
{
	avgRain = (sumRain / 31);
}
//*****************************
//DISPLAY RAIN AVERAGE		  *
//*****************************
void Rain::display(float sum)
{
	cout << fixed << setprecision(3);
	cout << "The average rain for the month of June is: " << avgRain << endl;
}
