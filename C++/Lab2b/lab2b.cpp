#include <iostream>
#include <ctime>
using namespace std;

int main ()
{	
	srand(time(NULL));

	int guess = 0;
	int num_guesses= 1;
	int secret = (rand() % 100) + 1;
	
	std::cout << "I'm thinking of a number between 1 and 100...\n\n";

	for (int i = 0; i >= 0; i++)
	{
		std::cout << "Please guess a number: ";
		std::cin >> guess;

		if (guess > secret)
		{
			std::cout << guess << " is too high!\n";
			num_guesses += 1;
		}
		else if (guess < secret)
		{
			std::cout << guess << " is too low.\n";
			num_guesses += 1;
		}
		else if (guess == secret)
		{
			std::cout << "\nCongragulations! You guessed the number in " << num_guesses << " guesses!\n\n";
			break;
		}
		else
		{
			std::cerr << "Error!\n\n";
			break;
		}
	}

	return 0;
}