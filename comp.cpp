#include <iostream>
#include <cstdlib>
#include <ctime>

int randomNum()
{
	srand(time(NULL));
	int randNum = (rand() % 3) + 1;
	return randNum;
}

void computerTurn(int currentTotal)
{
	int temp{currentTotal % 4};

	if(currentTotal<20)
	{
		if(temp != 0)
			currentTotal += 4 - temp;
		else
		{
		temp = randomNum();
		currentTotal += 4 - temp;
		}
	}
	else
		currentTotal = 21;
	std::cout << "\nComputer's turn: "<< 4 - temp << "\nThe total is now " << currentTotal << '\n';

	playerTurn(currentTotal);
}
