#include <iostream>
#include <ctime>
using namespace std;

int randint(int x) {
	return (rand() % x);
}

int randint(int x, int y) {
	return (randint(y - x) % x);
}

int main () {
	int minimum{0};
	int maximum{0};
	int bet{0};
	int winnings{0};
	int die_1{0};
	int die_2{0};
	int roll{0};
	char endPrompt{' '};
	
	minimum = 1;
	minimum = 6;
	
	std::cout << "\n\tGET READY TO PLAY THE DICE GAME!\n";
	
	int i = 0;
	while (i < 1) {
		srand(time(NULL));
		
		std::cout << "\n\tWHAT IS YOUR BET? $";
		std::cin >> bet;
		
		die_1 = randint(minimum, maximum);
		die_2 = randint(minimum, maximum);
		roll = (die_1 + die_2);
		
		std::cout << "\tDICE THROW IS " << roll;
		
		if (roll == 5 || roll == 11) {
			std::cout << "\n\tYOU WON! YOU TRIPLED YOUR BET!";
			winnings += (bet * 3);
		}
		else if (roll == 7 || roll == 8) {
			std::cout << "\n\tYOU WON! YOU DOUBLED YOUR BET!";
			winnings += (bet * 2);
		}
		else if (roll == 6 || roll == 10) {
			std::cout << "\n\tYOU LOST!";
			winnings -= bet;
		}
		else
			std::cout << "\n\tNO CHANGE";
		
		std::cout << "\n\tYOUR TOTAL WINNINGS ARE: $" << winnings << ".00"
		 		  << "\n\tPLAY AGAIN? ('Y' or 'N'): ";
		std::cin >> endPrompt;

		if (endPrompt == 'Y' || endPrompt == 'y')
			continue;
		else if (endPrompt == 'N' || endPrompt == 'n') {
			std::cout << "\n\tTHANKS FOR PLAYING!\n";
			++i;
		}
		else {
			std::cout << "\nERROR: User input must match one of the following characters:"
					  << "'N', 'n', 'Y', or 'y'.\n";
		}
	}
	return 0;
}