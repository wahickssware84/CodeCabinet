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
public class Couple {
    Person spouse1;
    Person spouse2;
    public Couple(Person s1, Person s2) {
        spouse1 = s1;
        spouse2 = s2;
    }
    public Person getSpouse1() {
        return spouse1;
    }
    public Person getSpouse2() {
        return spouse2;
    }
}
