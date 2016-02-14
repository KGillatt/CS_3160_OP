#ifndef DICE_H
#define DICE_H
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//Create Dice
class Dice
{
private:
	int sides, result;
public:
	//Member functions
	void roll(int x)
	{
		int result = 0;
		srand ((unsigned) time(0));
		result = (rand() % x) + 1;
		cout << "You rolled " << result << endl;
	};

//Default constructor
Dice() {}

Dice(int s, int i)
{
	sides = s;
	result = i;
}
void setSides(int s)
{
	sides = s;
}
int getSides()
{
	return sides;
}

};
#endif