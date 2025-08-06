#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

// FUNCTION PROTOTYPES
double getArea(double r);
double getCircumference(double r);
double getDiameter(double r);

int main() {
    char value_type{' '};
    double radius{0};

    int i{0};
    while (i != 1) {
        std::cout << '\n' << "Please enter an 'A' to compute the area, a 'C' to compute the\n"
                             "circumference, or a 'D' to compute the diameter, followed by the\n"
                             "radius of the circle, or enter 'Q' to quit: \n\n"
							 "\t...";
        std::cin >> value_type >> radius;

        if (value_type == 'Q' || value_type == 'q')
            ++i;
        else if (value_type == 'A' || value_type == 'a')
			std::cout << '\n' << "\tThe AREA of a circle with radius " << radius << " is equivalent to: " << getArea(radius) << ".\n";
        else if (value_type == 'C' || value_type == 'c')
            std::cout << '\n' << "\tThe CIRCUMFERENCE of a circle with radius " << radius << " is equivalent to: " << getCircumference(radius) << ".\n";
        else if (value_type == 'D' || value_type == 'd')
            std::cout << '\n' << "\tThe DIAMETER of a circle with radius " << radius << " is equivalent to: " << getDiameter(radius) << ".\n";
        else
            std::cout << '\n' << "\nERROR: Invalid user input.\n";
    }
    return 0;
}

double getArea(double r) {
    return (M_PI * (r * r));
};

double getCircumference(double r) {
    return (2 * M_PI * r);
};

double getDiameter(double r){
    return (2 * r);
};