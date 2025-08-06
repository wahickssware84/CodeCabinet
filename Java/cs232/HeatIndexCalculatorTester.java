/*
 * William Aaron Hicks
 * February 6th, 2022 
 * CS 232 - 001
*/
/**
 * In this program, the classes HeatIndexCalculator.java and HeatIndexCalculatorTester.java work together in synchronicity
 * in order to calculate the APPROXIMATE human-perceived temperature with respect to the actual temperature and the
 * relative humidity, given the user's specified actual temperature and relative humidity percentage.
*/
package HICprog; // package containing the classes necessary for this program.
import java.util.Scanner; // Necessary for scanning user input.
public class HeatIndexCalculatorTester {
    // Intializes & defines class variables.
    private static int temperature;
    private static double humidity;
    private static double heatIndex;
    public static void main(String[] args) {
        String userInput1;
        String userInput2;
        Scanner inputDevice = new Scanner(System.in); // Creates a new 'Scanner' object.
        System.out.println("Please enter the temperature, in degrees Fahrenheit... "); // Prints the calculated values to the user's output device.
        userInput1 = inputDevice.nextLine();
        temperature = Integer.parseInt(userInput1);
        System.out.println("Please enter the relative humidity, as a percentage... ");
        userInput2 = inputDevice.nextLine();
        humidity = Double.parseDouble(userInput2);
        heatIndex = HeatIndexCalculator.calculateHeatIndex(temperature, humidity); // Calls static method calculateHeatIndex(int, double) from class HeatIndexCalculator.
        HeatIndexCalculator.printHeatIndex(temperature, humidity, heatIndex); // Calls static method printHeatIndex(int, double, double) from class HeatIndexCalculator.
    }
}
