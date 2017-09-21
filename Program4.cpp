//Alagba Blessing, ID: v223e376
//Assignment 4
//Description: Calculating the Gross Pay for employee

#include <iostream>
using namespace std;

int main()
{
  double Hours = 40; //declaring variables
  double HoursWorked;
  double dependants;
  double GrossPay;
  double SocialSecurityTax;
  double FederalIncomeTax;
  double StateIncomeTax;
  const int UnionDues = 10;
  double NetPay;

  cout<< "Enter the hours worked: "; //asking the user to enter the number of hours worked
  cin>> HoursWorked;
  cout<< endl;
  
  while (HoursWorked != 0) //using a while loop to test the condition for hours not = 0
  {
    cout<< "Enter the number of dependants: "; //user enters the number of dependants
    cin>> dependants;
    cout<< endl;
    
    if (HoursWorked > Hours) {   //using an if statement to test if the hours worked is more than the hours
        double ExtraHours = (HoursWorked - Hours);
       	GrossPay = (Hours*16.78)+(ExtraHours*1.5*16.78);  //calculates gross pay
                             }


else{   //if hours worked is not greater than hours
GrossPay = HoursWorked*16.78;
    }
  
  
    SocialSecurityTax = GrossPay * 0.06;  //calculates the withheld amounts
    FederalIncomeTax = GrossPay * 0.14;
    StateIncomeTax = GrossPay * 0.05;

    cout.setf(ios::fixed); //Magic Formula
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout<< "Gross Pay: " << GrossPay << endl;       //displaying the output
    cout<< "Social Security Tax Withheld: " << SocialSecurityTax << endl;
    cout<< "Federal Income Tax Withheld: " << FederalIncomeTax << endl;
    cout<< "State Income Tax Withheld: " << StateIncomeTax << endl;
    cout<< "Union Dues: " << UnionDues << endl;

    if (dependants >= 3)    //if the dependants is greater than or equal to 3
    {
      float dependantRate = 35; //an extra charge of $35 is applied
      cout<< "Health Insurance is: 35 \n"; //displays the output

      NetPay = GrossPay - (SocialSecurityTax + FederalIncomeTax + StateIncomeTax + UnionDues + dependantRate); //calculates the gross pay
      cout<< endl;
    }
    else
    {
      NetPay = GrossPay - (SocialSecurityTax + FederalIncomeTax + StateIncomeTax + UnionDues);
    }
    cout<< "Net Pay: " << NetPay << endl;

    cout << endl;
    cout << "Enter the hours worked: ";  // Initializes input for the new loop.
    cin >> HoursWorked;
  }

  return 0;
}
