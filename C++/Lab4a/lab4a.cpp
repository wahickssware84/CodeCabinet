#include <iostream>
#include <vector>
#include "lab4a.h"
using namespace std;

void part_one() 
{
	vector<int> inputs_1(10);
	vector<int> inputs_2(10);
	vector<int> sums(10);
	vector<int> products(10);
	int user_input = 0;
	
	std::cout << "\n\tPART ONE:\n\tPlease enter 20 integer values to finish running this program.\n"
			  << "\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
	
	int x = 0;
	while (x < 10)
	{
		std::cout << "\tEnter value #" << x + 1 << ": ";
		std::cin >> user_input;
		inputs_1[x] = user_input;
		++x;
	}
	
	int y = 0;
	while (y  < 10)
	{
		std::cout << "\tEnter value #" << y + 11 << ": ";
		std::cin >> user_input;
		inputs_2[y] = user_input;
		++y;
	}

	std::cout << "\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n"
			  << "\tResults\n\n";
	
	int a = 0;
	int b = 0;
	for (int i = 0; i < 10; ++i)
	{
		a = inputs_1[i] + inputs_2[i];
		sums[i] = a;
		b = inputs_1[i] * inputs_2[i];
		products[i] = b;
	}
		
	for (int i = 0; i < 10; ++i)
		std::cout << "\t   " << inputs_1[i] << ",  " << inputs_2[i] << ",  " << sums[i] << ",  " << products[i] << '\n';
}

void part_two() 
{
	vector<int> results(10);
	int user_input = 0;
	int rotations = 0;
	
	std::cout << "\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n"
			  << "\n\tPART TWO:\n\tPlease enter 10 integer values to finish running this program.\n"
			  << "\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
	
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "\tEnter value #" << i + 1 << ": ";
		std::cin >> user_input;
		results[i] = user_input;
	}
	
	/* KNOWN BUG HERE - WILL FIX AND RE-SUBMIT AFTER DUE DATE */
	std::cout << "\n\tHow many rotations do you wish to perform? ";
	std::cin >> rotations;
	
	int tempA{};
	int tempB{};
	for (int i = 0; i < rotations; ++i)
	{
		tempA = results[0];
		tempB = results[9];
		for (int i = 0; i < 1; ++i)
		{
			results[i] = results[i +1];
			results[0] = tempB;
			results[9] = tempA;
		}
	}
	
	std::cout << "\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n"
			  << "\tResults\n\n";	

	for (int i = 0; i < results.size(); ++i)
		std::cout << "\t   " << results[i] << '\n';
}