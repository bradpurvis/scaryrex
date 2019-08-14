//Brad Purvis
//COP2000.053
//Flip a coin 100 times and display heads or tails, plus total count

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//prototypes
void toss(int &, int &);
void count(int &, int &);
void displayCount(int, int);



int main()
{
	//program code goes here
	int heads = 0,
		tails = 0;
		
	cout << "Press enter to toss a coin 100 times and see results: " << endl;
	cin.get();
	toss(heads, tails);
	displayCount(heads, tails);
	return 0;
}
//*******************
//toss function		*
//*******************

void toss(int &val1, int &val2)
{
	srand(time(0)); 
	for (int counter = 1; counter <= 100; counter++) 
 	{
		if (rand() % 2 == 0)   

		{
			cout << "Coin flip " << counter << "  is on heads" << endl;
			count(val1, val2);
		}
		else
		{
			cout << "Coin flip " << counter << "  is on tails" << endl;
			count(val1, val2);
		}
	}
}
//************************
//count function		 *
//************************
void count(int &count1, int &count2)
{
	if (rand() % 2 == 0)
	{
		count1++;    
	}
	else
	{
		count2++;   
	}
}
//************************
//display function		 *
//************************
void displayCount(int disp1, int disp2)   
{
	cout << "Number of heads: " << disp1 << "\n";
	cout << "Number of tails: " << disp2 << "\n";
}