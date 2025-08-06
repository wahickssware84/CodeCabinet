/* William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * March 13th, 2022
 *
 * @author Aaron
 */
import java.util.Scanner;
public class BarChart2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int artPoints;
        int bobPoints;
        int calPoints;
        int danPoints;
        int eliPoints;
        final int AMT_EACH_ASTERISK = 10;
        System.out.println("Enter total seasonal points");
        System.out.print(" by Art >> ");
        artPoints = input.nextInt();
        System.out.print(" by Bob >> ");
        bobPoints = input.nextInt();
        System.out.print(" by Cal >> ");
        calPoints = input.nextInt();
        System.out.print(" by Dan >> ");
        danPoints = input.nextInt();
        System.out.print(" by Eli >> ");
        eliPoints = input.nextInt();
        System.out.println("\nPoints for Season (each asterisk represents " + AMT_EACH_ASTERISK + " points)\n");
        drawChart("Art", artPoints, AMT_EACH_ASTERISK);
        drawChart("Bob", bobPoints, AMT_EACH_ASTERISK);
        drawChart("Cal", calPoints, AMT_EACH_ASTERISK);
        drawChart("Dan", danPoints, AMT_EACH_ASTERISK);
        drawChart("Eli", eliPoints, AMT_EACH_ASTERISK);
    }
    public static void drawChart(String name, int points, int amt_each) {
        System.out.print(name + " ");
        for (int i = 0; i < points/amt_each; i++) {
            System.out.print("*");
        }
        System.out.println();
        }
}