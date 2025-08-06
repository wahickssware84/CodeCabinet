/*
 * William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * January 25th, 2022
 * 
 */

import java.util.Scanner; // Necessary for scanning user input.

public class Lab2a { // // Name of this file, the main class, and this Java project.
    public static void main(String[] args) {
        // Initializes 'double' variables that this program uses.
        double width;
        double length;
        double area;
        double perimeter;
        
        Scanner inputDevice = new Scanner(System.in); // Sets up new 'Scanner' object.
        
        // Reads the input data given by the user.
        System.out.println("Please enter the rectangle's WIDTH: ");
        width = inputDevice.nextDouble();
        System.out.println("Please enter the rectangle's LENGTH: ");
        length = inputDevice.nextDouble();
        
        // Calculates the perimeter and area of the corresponding rectangle.
        perimeter = 2 * (length * width);
        area = width * length;
        
        // Prints the calculated results to the user's output device.
        System.out.println("\nThe PERIMETER of the rectangle is: " + perimeter + '.');
        System.out.println("The AREA of the rectangle is: " + area + " units^2.\n");
    }
}
