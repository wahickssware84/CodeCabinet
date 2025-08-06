#include <iostream>
using namespace std;

int main ()
{
	double valDollar{ 0 };
	int centTotal{ 0 };
	int numDollars{ 0 };
	int numHalfDollars{ 0 };
	int numQuarters{ 0 };
	int numDimes{ 0 };
	int numNickels{ 0 };
	int numPennies{ 0 };
	
	std::cout << "\nPlease enter the total in dollars and cents: ";
	std::cin >> valDollar;
	
	centTotal = ( valDollar * 100 );
	numDollars = ( centTotal / 100 );
	centTotal -= ( 100 * numDollars );
	numHalfDollars = ( centTotal / 50 );
	centTotal -= ( 50 * numHalfDollars );
	numQuarters = ( centTotal / 25 );
	centTotal -= ( 25 * numQuarters );
	numDimes = ( centTotal / 10 );
	centTotal -= ( 10 * numDimes );
	numNickels = ( centTotal / 5 );
	centTotal -= ( 5 * numNickels );
	numPennies = ( centTotal );
	
	std::cout << "\nDollars: " << numDollars << '\n' <<
				"Half-Dollars: " << numHalfDollars << '\n' <<
				"Quarters: " << numQuarters << '\n' <<
				"Dimes: " << numDimes << '\n' <<
				"Nickels: " << numNickels << '\n' <<
				"Pennies: " << numPennies << "\n\n";
	
	return 0;
}