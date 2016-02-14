//Kevin Gillatt
//HW13 Open Ended Project
//CS 3160-Yi

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Dice.h"
#include "CoinToss.h"

using namespace std;

void displayMenu()
{
	cout << "Please select an option from the following menu:\n\n" 
			" -1: Create Die\n" 
			" -2: Roll Die\n"
			" -3: Flip a coin\n" 
			" -0: Exit\n" <<endl;
			cout << "Selection: ";
}

int main ()
{

int selection;
Dice dieArray[1]; //array for storing die object

//Introduction
cout << "Welcome to the Dice Roll Simulator!\n"
		"Here you can specify the number of sides of a die\n"
		"you would like to roll and get the result. If you\n"
		"simply want a 50/50 result than you can just take the\n" 
		"'flip coin' option. Thanks for using!\n" <<endl;
displayMenu();

cin >> selection;

//validate input
while(selection > 4 || selection < 0)
{
	cout << "Invalid selection!\n";
	displayMenu();
	cin >> selection;
}

//Initialize Coin object for coin flips
Coin quarter;

while(selection != 0)
{
	switch(selection)
	{
		case 1:
			cout << "How many sides does the die have?: ";
			int sides;
			cin >> sides;
			
			if(sides % 2 != 0)
			{	cout << "Cannot have an odd-sided die!";
				continue;
			}
			else if(sides == 2)
			{	cout << "Use the coin flip for just two sides!";
				continue;
			}
			else if(sides <= 0 || sides > 20)
			{	cout << "Invalid number of sides!";
				
			}
			else 
			{	
				Dice D1(sides, 0);
				dieArray[0] = D1;
				cout << "Die created! Use option '2' to roll\n";
			}
			
			displayMenu();
			cin >> selection;
				while(selection > 3 || selection < 0)
				{
					cout << "Invalid selection!\n";
					displayMenu();
					cin >> selection;
			}
		
		break;
		case 2:
			//roll dice
			
			dieArray[0].roll(dieArray[0].getSides());
			
			displayMenu();
			cin >> selection;
				while(selection > 3 || selection < 0)
				{
					cout << "Invalid selection!\n";
					displayMenu();
					cin >> selection;
				}	
		break;
		case 3:
			quarter.toss();
			cout << "Coin tossed..." << quarter.getSideup() <<endl;
			cout << "\nNext Selection: ";
			cin >> selection;
				while(selection > 3 || selection < 0)
				{
					cout << "Invalid selection!\n";
					displayMenu();
					cin >> selection;
				}		
	}//end switch
}//end while

return 0;
}

