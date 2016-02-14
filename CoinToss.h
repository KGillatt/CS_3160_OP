#ifndef COINTOSS_H
#define COINTOSS_H

using namespace std;

//Create Coin class
class Coin
{
private:
	string sideUp;
public:
	Coin();
//Member functions
	void toss();
	string getSideup();
};

//Default constructor
Coin::Coin()
{
	toss();
}

//Returns current side of coin
string Coin::getSideup()
{
	return sideUp;
}

//Simulates coin toss
void Coin::toss()
{
	srand ((unsigned) time(0));
	int num = rand()%2 + 1;
	if (num == 1)
	{
		sideUp ="HEADS";
	}
	else
	{
		sideUp="TAILS";
	};
};

#endif