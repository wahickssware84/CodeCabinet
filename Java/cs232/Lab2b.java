/*
* William Aaron Hicks
* Dr. Arup Ghosh
* CS 232 - 001
* January 25th, 2022
*/
import java.util.Scanner; // Necessary for scanning user input.
public class Lab2b { // Name of this project, the main class, and this Java file.
    public static void main(String[] args) {
        // Initizales & defines variables.
        String getCelsius;
        float fahrenheit;
        float celsius;
        // Creates a new 'Scanner' object.
        Scanner inputDevice = new Scanner(System.in);
        // Gets the celsius value from the user's input device.
        System.out.println("Please enter the value of a temperature in degrees Celsius: ");
        getCelsius = inputDevice.nextLine();
        // Calculates the degrees Fahrenheit value from the given degrees Celsius value.
        celsius = Float.parseFloat(getCelsius);
        fahrenheit = (celsius * (float)1.8) + (float)32.0;
        // Prints the calculated Fahrenheit value to the output device.
        System.out.println("\n" + celsius + " degrees Celsius is equivalent to " + fahrenheit + " degrees Fahrenheit.\n");
    }
}