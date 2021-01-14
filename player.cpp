#include <iostream>

int playerTurn(int currentTotal)
{
	int inp{};

	if (currentTotal == 21)
	{
		std::cout << "You win" << '\n';
		return 0;
	}
	else if(currentTotal<21)
	{
		std::cout << "\nYour Turn: Enter 1, 2 or 3" << '\n';
		std::cin >> inp;

		if(inp == 1  || inp == 2 || inp == 3)
			currentTotal+=inp;
		else
		{
			std::cout << "Invalid input" << '\n';
			playerTurn(currentTotal);
		}

		std::cout << "The total is now " << currentTotal << '\n';

		if(currentTotal >= 21)
		{
			std::cout << "You lose" << '\n';
			return 0;
		}
		else
			computerTurn(currentTotal);
	}
	return 0;
}
