#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <stdexcept>
#include <typeinfo>
using namespace std;

// GLOBAL CONSTANTS
const string IST_FNAME = "input.csv";
const string OST_FNAME = "output.txt";

// FUNCTION DECLARATION
void getAndPrint(vector<map<string, string>> &people, ofstream &ost);

int main(int argc, char** argv)
{
	string header;

	/* Create containers for file data */
	map<string, string> person;					// contains information about an individual person
	vector<map<string, string>> people = {};	// contains information about a list of people

	try
	{
		/* Open input and output files */
		ifstream ist(IST_FNAME);
		ofstream ost(OST_FNAME);

		/* Was the input file opened?  If not, throw an exception */
		if (!ist)
		{
			throw runtime_error("ERROR: Input file not found!");
		}

		/* Skip the header row */
		getline(ist, header);

		/* Read lines until EOF reached */
		while (!ist.eof()) 
		{
			person = {};								// create new map for next person's data
			getline(ist, person["firstname"], ',');		// read fields (terminated by commas)
			getline(ist, person["middlename"], ',');	// "
			getline(ist, person["lastname"], ',');		// "
			getline(ist, person["address"], ',');		// "
			getline(ist, person["city"], ',');			// "
			getline(ist, person["state"], ',');			// "
			getline(ist, person["zip"], ',');			// "
			getline(ist, person["box"], ',');			// "
			getline(ist, person["rate_a"], ',');		// "
			getline(ist, person["rate_b"], ',');		// "
			getline(ist, person["rate_c"]);				// last field terminated by '\n'!
			people.push_back(person);					// add map to collection
		}
		
		/* Call a function (which you must write!) to iterate through the
         "people" collection, copying the data for each person to the output
          file, and to the console, in standard US address block format       */
		getAndPrint(people, ost);
		
		/* Close input file; exit */
		ist.close();
		ost.close();
	}

	catch(exception& e) 
	{
		std::cerr << e.what() << '\n';
		return -1;
	}

	return 0;
}

void getAndPrint(vector<map<string, string>> &people, ofstream &ost)
{
	for (int i{0}; i<people.size() - 1 ; i++)
	{
		ost << people[i]["firstname"] << ' ' << people[i]["middlename"] << ' ' << people[i]["lastname"] << '\n';
		ost << people[i]["address"] << '\n';
		ost << people[i]["city"] << ' ' << people[i]["state"] << ' ' << people[i]["zip"] << '\n';
		
		if (people[i]["box"] == "A")
			ost << people[i]["rate_a"] << "\n\n";
		else if (people[i]["box"] == "B")
			ost << people[i]["rate_b"] << "\n\n";
		else if (people[i]["box"] == "C")
			ost << people[i]["rate_c"] << "\n\n";
		else
			break;
	}
}