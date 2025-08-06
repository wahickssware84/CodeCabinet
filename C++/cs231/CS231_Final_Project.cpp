#include <iostream>
#include <cmath>
using namespace std;

int num_grains(int x);

int main() {
	int num_squares = 2;
	std::cout << '\t' << num_grains(num_squares) << '\n';
	return 0;
}

int num_grains(int x) {
	int y = 1;
	for (int i = 0; i < x; ++i)	{
		y += (y - 1);
		y *= 2;
	}
	return y;
}