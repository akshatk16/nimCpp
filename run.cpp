void computerTurn(int currentTotal);
int playerTurn(int currentTotal);


#include "player.cpp"
#include "comp.cpp"

#include <iostream>


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
		playerTurn(0);
	else
		computerTurn(0);
}

int main()
{
	getChoice();

	return 0;
}
