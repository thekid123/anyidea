#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double S0 = 4/1;                          //declaring variables
  double S1 = S0 - 4.0/3.0;
  double n = 2;
  double value;

  do {                                      //using a do...while loop to test the formula
    value = pow(-1.0, n)*(4/(2*n+1));
    S0 = S1;
    S1 = S0 + value;
    n++;
    cout<< S0 << endl;
    }
while (abs(S1 - S0) > 0.00005); //while the absolute value of their difference is greater than 0.00005

cout.setf(ios::fixed);            //magic formula
cout.setf(ios::showpoint);
cout.precision(4);

cout<< S1 << endl; //prints out the result

return 0;

}
