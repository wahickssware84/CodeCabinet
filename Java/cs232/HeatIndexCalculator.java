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
import java.lang.Math; // Necessary for utilizing the function pow(double, double) in math calculations.
public class HeatIndexCalculator {
    // Intializes & defines class variables.
    int currentTemp;
    double currentHumidity;
    public static double calculateHeatIndex(int T, double R) {
        // Intializes & defines heat index variables.
        double calculatedHeatIndex;
        double c1 = -42.379;
        double c2 = 2.04901523;
        double c3 = 10.14333127;
        double c4 = -0.22475541;
        double c5 = -0.00683783;
        double c6 = -0.05481717;
        double c7 = 0.00122874;
        double c8 = 0.00085282;
        double c9 = -0.00000199;
        calculatedHeatIndex = c1+(c2*T)+(c3*R)+(c4*T*R)+(c5*Math.pow(T, 2))+(c6*Math.pow(R, 2))+(c7*Math.pow(T, 2)*R)+(c8*T*Math.pow(R, 2))+(c9*Math.pow(T, 2)*Math.pow(R, 2));
        return calculatedHeatIndex;
    }
    public static void printHeatIndex(int currentTemp, double currentHumidity, double calculatedHeatIndex) {
        System.out.println("At a temperature of " + currentTemp + "F and a humidity of " + currentHumidity + "...\n"
        + "It actually feels like: " + calculatedHeatIndex + "F.\n");
    }
}
