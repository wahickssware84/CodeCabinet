#include <iostream>
using namespace std;

int main ()
{
	int user_input{0};
	int smallest{100};
	int largest{0};
	int total{0};
	int i{0};
	float num_inputs{0};
	float average{0};

	std::cout << "\nEnter a list of integers between 1 and 100, and I will tell you the smallest, the largest, and the average: "
			 << "\n(To end this list, enter '0')\n\n";

	while (i == 0)
	{
		std::cin >> user_input;

		if (user_input > 100 || user_input < 0)
		{
			std::cout << "\nERROR: User input must be a value between 1 and 100. Try again!\n";
			smallest = 0;
			i++;
		}

		if (user_input < smallest && user_input != 0)
		{
			smallest = user_input;
		}
		
		if (user_input > largest)
		{
			largest = user_input;
		}

		num_inputs += 1.0;
		total += user_input;

		if (user_input == 0)
		{
			num_inputs -= 1.0;
			i++;
		}
	}
	
	average = (total / num_inputs);

	std::cout << "\nSmallest: " << smallest
			 << "\nLargest: " << largest
			 << "\nAverage: " << average << "\n\n";

	return 0;
}