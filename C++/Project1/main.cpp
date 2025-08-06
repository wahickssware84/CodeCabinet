#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include "Project1.cpp"
#include "Project1.h"
using namespace std;
const int CODE_SPAN = 6;
const int CODE_LENGTH = 4;
const int MAX_GUESSES = 12;

int main(int argc, char** argv) 
{
	/* Seed pseudorandom number generator */
	srand(time(NULL));

	/* Local Variables */
	string secret_code, player_code;                    /* Secret Code and Player's Guesses */
	string secret_code_copy, player_code_copy;          /* Temporary copies of secret_code and player_code (for code checking) */
	char repeat_game;                                   /* For player's input at the end of the game */
	int correct_digits, misplaced_digits, num_guesses;  /* Counters for correct/misplaced digits and player's guesses */
	bool game_over = false, guessed_code = false;       /* Flags for "game over" and "player guessed code" */

	/* Print welcome message and instructions */
	print_instructions();

	// MAIN LOOP
	/* START OF A NEW GAME */
	while (!game_over)
	{
		/* Print Header */
		cout << '\n' << setw(40) << "YOUR GUESSES:" << setw(15) << "CORRECT:" << setw(15) << "MISPLACED:" << '\n';
		cout << string(70, '=') << '\n';

		/* Generate secret code; reset guess counter */
		secret_code = generate_code();
		num_guesses = 0;
		secret_code_copy = secret_code;

		/* COMMENT THE FOLLOWING LINE TO HIDE SECRET CODE AFTER DEBUGGING COMPLETE */
		cout << "Secret Code: " << secret_code << '\n';
		
		while ( (!guessed_code) && (num_guesses < MAX_GUESSES) ) 
		{
			/* START OF NEW ROUND OR TURN */
			/* Reset correct/misplaced digit counters */
			correct_digits = 0;
			misplaced_digits = 0;

			/* Get and validate the player's guess using "get_player_code()"; increment guess counter */
			player_code = get_player_code();
			++num_guesses;
			player_code_copy = player_code;
			
			if (player_code == secret_code)
			{
				cout << "Congratulations, you guessed the code!\nIt only took you " << num_guesses << " guess(es)\n\n";
				guessed_code = true;
				break;
			}
					
			// CHECK FOR # OF CORRECT DIGITS
			for (int x = 0; x < CODE_LENGTH; x++)
			{
				if (player_code[x] == secret_code[x])
				{
					correct_digits++;
					player_code[x] = 'a';
					secret_code[x] = 'b';
				}
			}
			
			// CHECK FOR # OF MISPLACED DIGITS
			for (int x = 0; x < CODE_LENGTH; x++)
			{
				for(int i = 0; i < CODE_LENGTH; i++)
				{
					if (player_code[x] == secret_code[i])
					{
						misplaced_digits++;
						player_code[x] = 'c';
						secret_code[i] = 'd';
					}
				}
			}

			/* Print player's guess and number of correct/misplaced digits */
			cout << setw(40) << player_code_copy << setw(15) << correct_digits << setw(15) << misplaced_digits << '\n';
			
			player_code = player_code_copy;
			secret_code = secret_code_copy;
		}
		
		/* Did the player win the game?  If not, print the secret code */
		if (!guessed_code) 
		{
				/* If they are, print a message and the guess counter, and flip the "guessed code" flag to end current round */
				cout << "Sorry, you've run out of guesses!\n";
				cout << "The secret code was: " << secret_code << "!\n\n";
				guessed_code = true;
		}
		
		/* After the end of the previous round, ask if the player would like to play a new round */
		cout << "Would you like to play again (Y/N)? ";
		cin >> repeat_game;
		repeat_game = toupper(repeat_game);
		
		/* If player says "no", flip the "game over" flag to end the game
		Otherwise, flip the "guessed code" flag again to start a new round */
		if (repeat_game == 'N')
		{
			game_over = true;
		}
		else
		{
			guessed_code = false;
		}
	}
	cout << "Thanks for playing!\n\n";
	return 0;
}