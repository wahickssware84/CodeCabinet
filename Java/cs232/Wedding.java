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
public class Wedding {
    public Couple couple;
    public LocalDate weddingDay;
    public String location;
    public Wedding (Couple spouses, LocalDate date, String l) {
        couple = spouses;
        weddingDay = date;
        location = l;
    }
    public Couple getSpouses() {
        return couple;
    }
    public LocalDate getWeddingDay() {
        return weddingDay;
    }
    public String getLocation() {
        return location;
    }
}
