/* William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * March 13th, 2022
 *
 * @author Aaron
 */
import java.util.Scanner;
public class BarChart {
    public static void main(String args[]) {
        String[] playerNames = {"Art", "Bob", "Cal", "Dan", "Eli"};
        int[] points = new int[5];
        int i, j;
        Scanner inputDevice = new Scanner(System.in);
        for(i=0; i<5; i++) {
            System.out.print("\n Enter points earned by " + playerNames[i] + " >> ");
            points[i] = inputDevice.nextInt();
        }
        System.out.println("\n\n Points for Game \n");
        for(i=0; i<5; i++) {
            System.out.print("\n " + playerNames[i] + " ");
            for(j=1; j<=points[i]; j++) {
                System.out.print("*");
            }
        }
        System.out.println("\n");
    }
}