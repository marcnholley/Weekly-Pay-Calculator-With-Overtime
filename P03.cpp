//P03 Marc Holley
/*Calculates weekly net pay using hourly rate and number of hours worked,
validates input data, and determines overtime status*/

#include <iostream>
using namespace std;

int main()
{
	//Declaring and initializing constant variables
	const double UNION_DUES = 10.00, FICA_RATE = 0.06,
		FEDERAL_RATE(0.15), STATE_RATE(0.05), OVERTIME_RATE = 1.5;

	//Declaring changing variables
	int hours;
	double rate, gross, fica, federal, state, netPay, netHourly;

	//Sets decimal point to two positions
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Display name and input prompt
	cout << "P03 - Marc Holley TR 1:00pm \n\n";

	//Do prompt loop
	do
	{
		//Prompts and gets rate input
		cout << "Enter a value between $10 and $15.00 for the hourly rate: ";
		 cin >> rate;
	}
	//While rate is between 10 and 15 loop
	while (rate < 10.00 || rate > 15.00);

			//Initializing hours
			hours = 0;
			//While hours are between 1 and 50 loop
			while (hours < 1 || hours > 50)
			{
				//Prompts and gets hours input
				cout << "Enter a value between 1 and 50 for the hours worked: ";
				cin >> hours;

			}

				//Calculates gross pay, uses if else statement to determine overtime status
				if (hours > 40)
					gross = (40 * rate) + (hours - 40) * rate * OVERTIME_RATE;
				else
					gross = hours * rate;

				fica = gross * FICA_RATE;
				federal = gross * FEDERAL_RATE;
				state = gross * STATE_RATE;
				netPay = gross - (fica + federal + state + UNION_DUES);
				netHourly = netPay / hours;

				//Output
				cout << endl
				<< "Hourly Rate: \t" << rate << endl
				<< "Hours Worked:\t" << hours << endl
				<< "Gross Pay:   \t" << gross << endl
				<< "FICA Tax:    \t" << fica << " at " << FICA_RATE << endl
				<< "Federal Tax: \t" << federal << " at " << FEDERAL_RATE << endl
				<< "State Tax:   \t" << state << " at " << STATE_RATE << endl
				<< "Union Dues:  \t" << UNION_DUES << endl
				<< "Net Pay:     \t" << netPay << endl
				<< "Net Hourly:  \t" << netHourly << endl;

		   cout << "\nThank you!\n\n";
}
//end of main


//end of page
