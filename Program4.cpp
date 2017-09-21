#include <iostream>
using namespace std;

int main()
{
  double Hours = 40;
  double HoursWorked;
  double dependants;
  double GrossPay;
  double SocialSecurityTax;
  double FederalIncomeTax;
  double StateIncomeTax;
  double OvertimeRate;
  const int UnionDues = 10;
  double NetPay;

  cout<< "Enter the hours worked: \n";
  cin>> HoursWorked;

  while (HoursWorked != 0)
  {
    cout<< "Enter the number of dependants: \n";
    cin>> dependants;

    GrossPay = HoursWorked*16.78;
    
    if (HoursWorked > Hours)
    {
        GrossPay += (HoursWorked-Hours)*(1.5*16.78)
      
    }
    SocialSecurityTax = GrossPay * 0.06;
    FederalIncomeTax = GrossPay * 0.14;
    StateIncomeTax = GrossPay * 0.05;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout<< "Gross Pay: " << GrossPay << endl;
    cout<< "Social Security Tax Withheld: " << SocialSecurityTax << endl;
    cout<< "Federal Income Tax Withheld: " << FederalIncomeTax << endl;
    cout<< "State Income Tax Withheld: " << StateIncomeTax << endl;
    cout<< "Union Dues: " << UnionDues << endl;

    if (dependants >= 3)
    {
      float dependantRate = 35;
      cout<< "Health Insurance is: 35 \n";

      NetPay = GrossPay - (SocialSecurityTax + FederalIncomeTax + StateIncomeTax + UnionDues + dependantRate);
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
