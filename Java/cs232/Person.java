/* William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * February 27th, 2022
 *
 * PROBLEM STATEMENT: Create a class named Person that holds the following fields: two String objects for the person’s first and last name and a LocalDate object 
 * for the person’s date of birth. Create a class named Couple that contains two Person objects. Create a class named Wedding for a wedding planner that includes the 
 * date of the wedding, the names of the Couple being married, and a String for the location. Provide constructors for each class that accept parameters for each 
 * field, and provide get methods for each field. Then write a program that creates two Wedding objects and in turn passes each to a method that displays all the 
 * details. Save the files as Person.java, Couple.java, Wedding.java, and TestWedding.java. 
 * 
 * @author Aaron */
import java.time.*;
public class Person {
    String firstName;
    String lastName;
    LocalDate dateOfBirth;
    public Person(String fn, String ln, LocalDate date) {
        this.firstName = fn;
        this.lastName = ln;
        this.dateOfBirth = date;
    }
    public String getFirstName() {
        return this.firstName;
    }
    public String getLastName() {
        return this.lastName;
    }
    public LocalDate getDateOfBirth() {
        return this.dateOfBirth;
    }
}
