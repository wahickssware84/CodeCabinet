/* William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * March 13th, 2022
 *
 * @author Aaron
 */
import java.util.Scanner;
public class TestApartments {
    public static void main(String[] args) {
        Scanner inputDevice = new Scanner(System.in);
        int minBeds;
        int flag = 0;
        double minBaths, maxRent;
        Apartment apartment1 = new Apartment(1, 2, 1.5, 750.0);
        Apartment apartment2 = new Apartment(2, 5, 5.5, 2750.0);
        Apartment apartment3 = new Apartment(3, 1, 1, 500.0);
        Apartment apartment4 = new Apartment(4, 8, 10, 8750.0);
        Apartment apartment5 = new Apartment(5, 8, 10.5, 9000.0);
        System.out.println("How many bedrooms? ...");
        minBeds = Integer.parseInt(inputDevice.nextLine());
        System.out.println("How many bathrooms (including half-bathrooms, e.g. \"2.5\", \"1.5\", etc.)?");
        minBaths = Double.parseDouble(inputDevice.nextLine());
        System.out.println("What is the maximum monthly rent you are willing to pay, in dollars?");
        maxRent = Double.parseDouble(inputDevice.nextLine());
        if(apartment1.getNumberOfBedrooms() >= minBeds && apartment1.getNumberOfBaths() >= minBaths && apartment1.getMonthlyRent() <= maxRent){
            displayApartmentDetails(apartment1);
            flag = 1;
        }
        if(apartment2.getNumberOfBedrooms() >= minBeds && apartment2.getNumberOfBaths() >= minBaths && apartment2.getMonthlyRent() <= maxRent){
            displayApartmentDetails(apartment2);
            flag = 1;
        }
        if(apartment3.getNumberOfBedrooms() >= minBeds && apartment3.getNumberOfBaths() >= minBaths && apartment3.getMonthlyRent() <= maxRent){
            displayApartmentDetails(apartment3);
            flag = 1;
        }
        if(apartment4.getNumberOfBedrooms() >= minBeds && apartment4.getNumberOfBaths() >= minBaths && apartment4.getMonthlyRent() <= maxRent){
            displayApartmentDetails(apartment4);
            flag = 1;
        }
        if(apartment5.getNumberOfBedrooms() >= minBeds && apartment5.getNumberOfBaths() >= minBaths && apartment5.getMonthlyRent() <= maxRent){
            displayApartmentDetails(apartment5);
            flag = 1;
        }
        if(flag == 0)
            System.out.println("ERROR: Invalid input!\n");
        }
    public static void displayApartmentDetails(Apartment apartment) {
        System.out.println(" - " + "Apartment No. " + apartment.getApartmentNumber() + " - ");
        System.out.println("Bedrooms: \t" + apartment.getNumberOfBedrooms());
        System.out.println("Baths: \t\t" + apartment.getNumberOfBaths());
        System.out.println("Rent (Monthly): $" + apartment.getMonthlyRent() + "0\n");
    }
}
