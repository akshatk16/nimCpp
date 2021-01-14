#include <iostream>

bool playerTurn(int, bool);
int computerTurn(int, bool);
void winner(bool);


void getChoice()
{
	char start{};

	std::cout << "Do you want to start? y/n" << '\n';
	std::cin >> start;

	if(start != 'y' && start != 'n')
	{
		std::cout << "Invalid input" << '\n';
		getChoice();
	}
	else if(start == 'y')
		playerTurn(0, 0);
	else
		computerTurn(0, 0);
}

int computerTurn(int currentTotal, bool result)
{
	int temp{};

	if(currentTotal<18)
	{
		temp = currentTotal % 4;
		currentTotal = currentTotal + 4 - temp;
	}
	else
		currentTotal = 21;

	std::cout << "The current total is " << currentTotal << '\n';

	if(currentTotal==21)
		result = !result;

	playerTurn(currentTotal, result);

	return 0;
}

void winner(bool result)
{
	if(result)
		std::cout << "You win" << '\n';
	else
		std::cout << "You lose" << '\n';
}


int main()
{
	getChoice();

	return 0;
}
