/*
 * William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * January 23rd, 2022
 * 
 * @author Aaron
*/

package prog; // package containing the classes necessary for this program.
import java.util.Scanner; // necessary for scanning user input.

public class Inches { // name of this file as well as the name of the main class for this java project.
    public static void main(String args[]) {
  
        String getInches; // String variable which stores the user's input.
        int inches; // Number of inches; caculated on line 25.
        int feet; // Number of feet given the number of inches; calculated on line 26.
        int remainder; // Number of inches remaining after dividing the user's input by 12; calculated on line 27.
        
        Scanner getData = new Scanner(System.in);
        System.out.println("Please enter the number of inches to be converted: ");
        getInches = getData.nextLine();
        
        inches = Integer.parseInt(getInches); // Converts the string variable 'getInches' into an integer to be stored in the variable 'inches'.
        feet = (inches / 12); // Since there are 12 inches in a foot, the number of inches is divided by 12.
        remainder = (inches % 12); // Stores the number of inches remaining in the variable 'remainder'.
        
        System.out.println('\n' + getInches + " RESULT = " + feet + " feet, " + remainder + " inches."); // Prints the results
    }
}