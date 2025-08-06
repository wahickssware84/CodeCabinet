#include <iostream>
using namespace std;

int main ()
{
	int numPennies{ 0 };
	int numNickels{ 0 };
	int numDimes{ 0 };
	int numQuarters{ 0 };
	int numHalfDollars{ 0 };
	int valPennies{ 0 };
	int valNickels{ 0 };
	int valDimes{ 0 };
	int valQuarters{ 0 };
	int valHalfDollars{ 0 };
	int centTotal{ 0 };
	double dollarTotal0{ 0 };
	double dollarTotal1{ 0 };
	
	std::cout << "\nHow many pennies do you have? ";
	std::cin >> numPennies;
	std::cout << "How many nickels do you have? ";
	std::cin >> numNickels;
	std::cout << "How many dimes do you have? ";
	std::cin >> numDimes;
	std::cout << "How many quarters do you have? ";
	std::cin >> numQuarters;
	std::cout << "How many half-dollars do you have? ";
	std::cin >> numHalfDollars;
	
	valPennies = ( numPennies );
	valNickels = ( numNickels * 5 );
	valDimes = ( numDimes * 10 );
	valQuarters = ( numQuarters * 25 );
	valHalfDollars = ( numHalfDollars * 50 );
	centTotal = ( valPennies + valNickels + valDimes + valQuarters + valHalfDollars );
	dollarTotal0 = ( centTotal / 100 );
	dollarTotal1 = ( centTotal % 100 );
	
	std::cout << "\nYou have " << numPennies << " pennies.\n"
				"You have " << numNickels << " nickels.\n"
				"You have " << numDimes << " dimes.\n"
				"You have " << numQuarters << " quarters.\n"
				"You have " << numHalfDollars << " half-dollars.\n"
				"\nThe total value of your change is: " << centTotal << " cents.\n"
				"This is equivalent to: $" << dollarTotal0 << '.' << dollarTotal1 << ".\n\n";
	
	return 0;
}