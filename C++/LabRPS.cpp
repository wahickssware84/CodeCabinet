#include <iostream>
#include <ctime>
using namespace std;

enum Weapon {
	ROCK = 0, PAPER = 1, SCISSORS = 2
};

int randint(int x) {
	return (rand() % x);
}

int randint(int x, int y) {
	return (randint(y - x) % x);
}

int main() {
	int num_games{0};
	int num_wins{0};
	int random_number{0};
	Weapon computer_choice{};
	int minimum{0};
	int maximum{3};
	char player_choice{' '};
	char end_prompt{' '};
	
	std::cout << "\n\tWELCOME TO ROCK-PAPER-SCISSORS!\n\n"
			  << "\tThis is a game for two players, which you will be playing"
			  << "\n\tagainst the computer. With each game, both players will"
			  << "\n\tselect one of the following weapons: PAPER, ROCK, or SCISSORS.\n"
			  << "\n\tThe winner is determined as follows:"
			  << "\n\tIf both players select the same weapon, the game will end in a tie."
			  << "\n\tROCK blunts SCISSORS, so the player who selects ROCK wins."
			  << "\n\tPAPER wraps ROCK, so the player who selects PAPER wins."
			  << "\n\tSCISSORS cuts PAPER, so the player who selects SCISSORS wins.\n"
			  << "\n\tWith each turn, select 'R' for ROCK, 'P' for paper, or 'S' for"
			  << "\n\tSCISSORS, and then press ENTER. You may quit at any time.\n\n";
	
	int i{0};
	while (i < 1) {
		srand(time(NULL));
		random_number = randint(maximum, minimum);
		
		if (random_number == 0)
			computer_choice = ROCK;
		else if (random_number == 1)
			computer_choice = PAPER;
		else if (random_number == 2)
			computer_choice = SCISSORS;
		else
			std::cout << "\nERROR! Could not obtain value of Weapon computer_choice!\n\n";
		
		std::cout << "\tChoose Weapon ('R', 'P', or 'S'): ";
		std::cin >> player_choice;

		if ((player_choice == 'R' || player_choice == 'r') && computer_choice == ROCK) {
			std::cout << "\tTIE! You and the computer both chose rock.\n";
			++num_games;
		}
		else if ((player_choice == 'P' || player_choice == 'p') && computer_choice == ROCK) {
			std::cout << "\tYOU WON! Paper beats rock.\n";
			++num_wins;
			++num_games;
		}	
		else if ((player_choice == 'S' || player_choice == 's') && computer_choice == ROCK) {
			std::cout << "\tYOU LOST! Rock beats scissors.\n";
			++num_games;
		}
		else if ((player_choice == 'P' || player_choice == 'p') && computer_choice == PAPER) {
			std::cout << "\tTIE! You and the computer both chose paper!\n";
			++num_games;
		}
		else if ((player_choice == 'R' || player_choice == 'r') && computer_choice == PAPER) {
			std::cout << "\tYOU LOST! Paper beats rock.\n";
			++num_games;
		}
		else if ((player_choice == 'S' || player_choice == 's') && computer_choice == PAPER) {
			std::cout << "\tYOU WON! Scissors beat paper.\n";
			++num_wins;
			++num_games;
		}
		else if ((player_choice == 'S' || player_choice == 's') && computer_choice == SCISSORS) {
			std::cout << "\tTIE! You and the computer both chose scissors.\n";
			++num_games;
		}
		else if ((player_choice == 'R' || player_choice == 'r') && computer_choice == SCISSORS) {
			std::cout << "\tYOU WON! Rock beats scissors.\n";
			++num_wins;
			++num_games;
		}
		else if ((player_choice == 'P' || player_choice == 'p') && computer_choice == SCISSORS) {
			std::cout << "\tYOU LOST! Scissors beats paper.\n";
			++num_games;
		}
		else
			std::cout << "\nERROR: Invalid input! Please try again.\n\n";

		std::cout << "\n\tPLAY AGAIN? ('Y' or 'N'): ";
		std::cin >> end_prompt;

		if (end_prompt == 'Y' || end_prompt == 'y') {
			continue;
		}
		else if (end_prompt == 'N' || end_prompt == 'n') {
			std::cout << "\n\tYou won " << num_wins << " out of " << num_games << " game(s)!" 
				      << "\n\tTHANKS FOR PLAYING!\n\n";
			++i;
		}
		else
			std::cout << "\nERROR: User input must match one of the following characters:"
					  << "'N', 'n', 'Y', or 'y'.\n";
	}
	return 0;
}