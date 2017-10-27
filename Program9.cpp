// Alagba Blessing
// ID: v223e376
// Program 9
// Description: Program to calculate the financial and monthly payment, including the amount of interest paid over 30 years.


#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

double compute_monthly_payment(double interest_rate, double amount_financed);
double total_interest_v(double loan_amount,double monthly_payment);
void kill_program(void);

int main() {

	double price, interest_rate, percentage_downpayment, amount_financed, monthly_payment, total_interest;

        cout.setf(ios::fixed);     //Setting two point precission
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Please enter the price of the home: ";
	cin  >> price;
       	cout << "Please enter the interest rate: ";
	cin  >> interest_rate;
	cout << "Please enter the percentage of price paid as down-payment: ";
	cin  >> percentage_downpayment;

	amount_financed = price - (price*(percentage_downpayment/100));  //calculate the financial amount
	monthly_payment = compute_monthly_payment(interest_rate, amount_financed); //Use call by value to interact with the function and assign value to a variable
	total_interest = total_interest_v(amount_financed, monthly_payment);


	cout << "Downpayment:     "  <<setw(4) << (price*(percentage_downpayment/100)) << endl; //setting the width and printing the result
  	cout << "Amount Financed: " << amount_financed << endl;
	cout << "Monthly Payment:   " <<setw(4) << monthly_payment << endl;
	cout << "Total Interest: " <<setw(2) << total_interest << endl;
}

double compute_monthly_payment(double interest_rate, double amount_financed) { //Calculating the monthly payment
        const double rate_6 = 6.0;
	const double rate_7 = 6.66;
	const double rate_8 = 7.34;
	const double rate_9 = 8.05;
	const double rate_10 = 8.78;
	const double rate_105 = 9.15;
	const double rate_11 = 9.52;

        double monthly_payment;
       //Conditional statements for monthly payment depending on interest rate.
        if (interest_rate == 6.00)
            monthly_payment = (rate_6*(amount_financed/1000));
  	if (interest_rate == 7.00)
            monthly_payment = (rate_7*(amount_financed/1000));
	if (interest_rate == 8.00)
            monthly_payment = (rate_8*(amount_financed/1000));
	if (interest_rate == 9.00)
            monthly_payment = (rate_9*(amount_financed/1000));
	if (interest_rate == 10.00)
            monthly_payment = (rate_10*(amount_financed/1000));
	if (interest_rate == 10.50)
            monthly_payment = (rate_105*(amount_financed/1000));
	if (interest_rate == 11.00)
            monthly_payment = (rate_11*(amount_financed/1000));

	return monthly_payment;
}

double total_interest_v(double loan_amount, double monthly_payment) { //Calculating the total interest
        double total_interest = (monthly_payment*360)-loan_amount;
	return total_interest;
}
