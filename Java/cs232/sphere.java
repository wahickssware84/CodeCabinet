/* William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * January 30th, 2022
 *
 * PROBLEM STATEMENT: Write a program that takes the radius of a sphere (a floating point number) as input 
 * and outputs the sphere's diameter, circumference, surface area, and volume. */
import java.util.Scanner; // Necessary for scanning user input.
import java.lang.Math; // Necessary for utilizing the value PI and the function pow(double, double) in math calculations.
public class sphere {
    public static void main(String[] args) {
        // Intializes & defines program variables.
        String getRadius;
        double radius;
        double diameter;
        double circumference;
        double surfaceArea;
        double volume;
        // Creates a new 'Scanner' object.
        Scanner inputDevice = new Scanner(System.in);
        // Obtains the value of the radius from the user as a String & puts the value into a corresponding double.
        System.out.println("Enter the radius value: ");
        getRadius = inputDevice.nextLine();
        radius = Double.parseDouble(getRadius);
        // Calculate the values of the diameter, circumference, surface area, and volume of the sphere from the given radius.
        diameter = 2.0*radius;
        circumference = 2.0*Math.PI*radius;
        surfaceArea = 4.0*Math.PI*Math.pow(radius, 2.0);
        volume = (4.0/3.0)*Math.PI*Math.pow(radius, 3.0);
        // Prints the calculated values to the user's output device.
        System.out.println("\n" + "The corresponding values of your sphere are..."
        + "\n\tDIAMETER: \t" + diameter
        + "\n\tCIRCUMFERENCE: \t" + circumference
        + "\n\tSURFACE AREA: \t" + surfaceArea
        + "\n\tVOLUME: \t" + volume + "\n");
    }
}
