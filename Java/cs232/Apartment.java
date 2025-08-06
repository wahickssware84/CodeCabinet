/* William Aaron Hicks
 * Dr. Arup Ghosh
 * CS 232 - 001
 * March 13th, 2022
 *
 * @author Aaron
 */
public class Apartment {
    private final int apartmentNumber;
    private final int numberOfBedrooms;
    private final double numberOfBaths;
    private final double monthlyRent;
    public Apartment(int apartmentNumber, int numberOfBedrooms, double numberOfBaths, double monthlyRent) {
        this.apartmentNumber = apartmentNumber;
        this.numberOfBedrooms = numberOfBedrooms;
        this.numberOfBaths = numberOfBaths;
        this.monthlyRent = monthlyRent;
    }
    public int getApartmentNumber() {
        return this.apartmentNumber;
    }
    public int getNumberOfBedrooms() {
        return this.numberOfBedrooms;
    }
    public double getNumberOfBaths() {
        return this.numberOfBaths;
    }
    public double getMonthlyRent() {
        return this.monthlyRent;
    }
}

