#include <iostream>
#include <cstdlib>
#include "Project1.h"
using namespace std;

/* Prompts the user to enter a four-digit code, then checks code length and whether digits are in bounds */
string get_player_code() 
{		
	/* Local Variables */
	string player_code = string(CODE_LENGTH, '0');  /* Player's validated code (initially filled with zeros) */
	string player_input;                            /* Player's input */
	char digit;                                     /* Next digit from player's input (for code validation) */
	bool valid_code = false;                        /* "Valid code" flag, initially set to false (for code validation) */
	bool invalid_digit_entered;                     /* "Invalid digit entered" flag (for code validation) */

	/* Repeat the input loop until we have validated every digit of the player's input */
	while (!valid_code) 
	{
		/* Reset "invalid digit entered" flag */
		invalid_digit_entered = false;

		/* Prompt player for code */
		cout << "Enter Code: ";
		cin >> player_input;

		/* Is code too short or too long? */
		if ( player_input.size() != CODE_LENGTH ) 
		{
			cout << "ERROR: Code must be exactly " << CODE_LENGTH << " digits long!\n\n";
		}

		/* If not, loop through player_input and check each digit, copying validated digits into player_code */
		else 
		{
			for (int x = 0; x < player_input.size(); x++)
			{
				if (player_input[x] > (CODE_SPAN + '0'))
				{
					player_code = "1";
				}
			}	
			if (player_code == "1")
			{
				cout << "ERROR: Code contains digits out of range specified or are not integers!\n\n";
			}
			if (player_input.size() == CODE_LENGTH && player_code != "1")
			{
				break;
			}
			
				/* If all digits in player_input checked out, flip "valid code" flag to true to exit validation loop */
				valid_code =  true;
			}
	}
	
	/* Return player's validated code */
	player_code = player_input;
	return player_code;
}

/* Generates a four-digit secret code at random using randint() helper functions */
string generate_code() 
{	
	/* Local variables */
	char digit;                                     /* Next digit of secret code */
	string code = "";                               /* Secret code, initially empty (append new digits using +=) */

	/* Generate random code of length CODE_LENGTH, with digits within range specified by CODE_SPAN */
	for (int x = 0; x < CODE_LENGTH; x++)
	{
		code.push_back(randint(1, CODE_SPAN + 1) + '0' );
	}
	
	/* Return newly generated secret code */
	return code;
}

/* Print welcome message and instructions */
void print_instructions() 
{
	cout << "WELCOME TO CODEBREAKER!\n\n";
	cout << "The computer has created the secret code, and your mission is to guess\n";
	cout << "it! After you register your guesses with the computer, it will respond\n";
	cout << "with numbers that analyze your guesses: 'CORRECT' indicates the number\n";
	cout << "of digits that are the correct identity AND in the correct places, and\n";
	cout << "'MISPLACED' indicates the number of digits of the correct identity\n";
	cout << "that are NOT in the correct places.\n\n";
	cout << "See if you can get all of the digits correct within twelve guesses!\n\n";	
	return;
}

// RANDOM NUMBER GENERATOR ( Returns random integer N where 0 <= N < MAX )
int randint(int max) 
{
	return (rand() % max);
}

// RANDOM NUMBER GENERATOR ( Returns random integer N where MIN <= N < MAX )
int randint(int min, int max) 
{
	return (randint( max - min ) + min);
}