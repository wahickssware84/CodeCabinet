/* William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * February 27, 2022
 *
 * PROBLEM STATEMENT: Create a class named Person that holds the following fields: two String objects for the person’s first and last name and a LocalDate object 
 * for the person’s date of birth. Create a class named Couple that contains two Person objects. Create a class named Wedding for a wedding planner that includes the 
 * date of the wedding, the names of the Couple being married, and a String for the location. Provide constructors for each class that accept parameters for each 
 * field, and provide get methods for each field. Then write a program that creates two Wedding objects and in turn passes each to a method that displays all the 
 * details. Save the files as Person.java, Couple.java, Wedding.java, and TestWedding.java. 
 * 
 * @author Aaron */
import java.time.*;
public class TestWedding {
    public static void main(String[] args) {
        // The dates of the 1st and 2nd weddings, respectively.
        LocalDate dateA = LocalDate.of(2022, Month.MARCH, 21);
        LocalDate dateB = LocalDate.of(2022, Month.APRIL, 1);
        // These variables contain data for the spouses (i.e., grooms and brides)
        Person spouse1a = new Person("John", "Loughran", dateA);
        Person spouse1b = new Person("Arthur", "Morgan", dateB);
        Person spouse2a = new Person("Stephanie", "Thrasher", dateA);
        Person spouse2b = new Person("Sadie", "Adler", dateB);
        // These variables contain data for couples A and B, respectively.
        Couple coupleA = new Couple(spouse1a, spouse2a);
        Couple coupleB = new Couple(spouse1b, spouse2b);
        // These variables contain the rest of the data regarding each wedding.
        Wedding weddingA = new Wedding(coupleA, dateA, "Los Angeles, CA");
        Wedding weddingB = new Wedding(coupleB, dateB, "Jacksonville, AL");
        // Calls the outputWedding() method, which prints the results to the screen.
        outputWedding(weddingA);
        outputWedding(weddingB);
    }
    public static void outputWedding(Wedding w) {
        Couple couple = w.getSpouses();
        LocalDate weddingDay = w.getWeddingDay();
        String location = w.getLocation();
        Person spouse1 = couple.getSpouse1();
        Person spouse2 = couple.getSpouse2();
        String firstSpouse1 = spouse1.getFirstName();
        String lastSpouse1 = spouse1.getLastName();
        LocalDate spouse1DOB = spouse1.getDateOfBirth();
        String firstSpouse2 = spouse2.getFirstName();
        String lastSpouse2 = spouse2.getLastName();
        LocalDate spouse2DOB = spouse2.getDateOfBirth();
        System.out.println("\nWedding of " + lastSpouse1 + " & " + lastSpouse2
                + "\non this day of " + weddingDay + " at " + location            
                + "\nbetween Ms. " + firstSpouse1 + " " + lastSpouse1 + " " + spouse1DOB
                + "\nand Mr. " + firstSpouse2 + " " + lastSpouse2 + " " + spouse2DOB);
    }
}
