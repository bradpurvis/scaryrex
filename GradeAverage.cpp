//Brad Purvis
//COP2000.053
//This program picks the best of the first two test grades, adds the third grade,
//then displays the avg. grade and letter grade.
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//Define variables
	double testScore1,
		testScore2,
		testScore3,
		classGrade;

		   
	//Display what the program will do for user.
	cout << "This program calculates your history class letter grade and total\n";
	cout << "grade out of 100. The calculation is determined by three test scores.\n";
	cout << "Each test grade has a maximum of 50 points. The lowest of the first\n"; 
	cout << "two tests is dropped and added to test three to give your total grade.\n";

	//Gather test 1 score and validate data.
	cout << endl << "Enter test score 1: ";
	cin >> testScore1;
	while (!cin || testScore1 > 50 || testScore1 < 0)
	{
		cout << "Invalid: Enter a number 0 to 50.\n"; 
		cout << "Enter test score 1: ";
		cin.clear();
		cin.ignore(250, '\n');
		cin >> testScore1;
	}
	
	//Gather test 2 score and validate data.
	cout << "Enter test score 2: ";
	cin >> testScore2;
	while (!cin || testScore2 > 50 || testScore2 < 0)
	{
		cout << "Invalid: Enter a number 0 to 50.\n";
		cout << "Enter test score 2: ";
		cin.clear();
		cin.ignore(250, '\n');
		cin >> testScore2;
	}
	
	//Gather test 3 score and validate data.
	cout << "Enter test score 3: ";
	cin >> testScore3;
	while (!cin || testScore3 > 50 || testScore3 < 0)
	{
		cout << "Invalid: Enter a number 0 to 50.\n";
		cout << "Enter test score 3: ";
		cin.clear();
		cin.ignore(250, '\n');
		cin >> testScore3;
	}
	
	//Determine average score, display letter grade and total number. 
	if (testScore1 <= testScore2)
	{
		classGrade = testScore2 + testScore3;
		cout << fixed << showpoint << setprecision(2);
		cout << endl << "Your average score is: " << classGrade << " out of 100." << endl;
		
		if (classGrade >= 90 && classGrade <= 100)
			cout << "\nYour letter grade: A.\n";
		else if (classGrade >= 80 && classGrade <= 90)
			cout << "\nYour letter grade: B.\n";
		else if (classGrade >= 70 && classGrade <= 80)
			cout << "\nYour letter grade: C.\n";
		else if (classGrade >= 60 && classGrade <= 70)
			cout << "\nYour letter grade: D.\n";
		else if (classGrade >= 0 && classGrade <= 60)
			cout << "\nYour letter grade: F.\n";
			
	}
	else if (testScore2 <= testScore1)
			
	{
		classGrade = testScore1 + testScore3;
		cout << fixed << showpoint << setprecision(2);
		cout << endl << "Your average score is: " << classGrade << " out of 100." << endl;
		
		if (classGrade >= 90 && classGrade <= 100)
			cout << "\nYour letter grade: A.\n";
		else if (classGrade >= 80 && classGrade <= 90)
			cout << "\nYour letter grade: B.\n";
		else if (classGrade >= 70 && classGrade <= 80)
			cout << "\nYour letter grade: C.\n";
		else if (classGrade >= 60 && classGrade <= 70)
			cout << "\nYour letter grade: D.\n";
		else if (classGrade >= 0 && classGrade <= 60)
			cout << "\nYour letter grade: F.\n";
				
	}
	
			
	return 0;


}

