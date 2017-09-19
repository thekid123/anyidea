#include <iostream>
using namespace std;


int main()
{

  int value, sum;                   //variable declaration
  double average, minimum, maximum;
  int x;

  sum = 0.0;          // initialising variables
  x = 0;

  cout << "Enter the first integer: ";
  cin >> value;

  minimum = value;
  maximum = value;

  while (value != 0.0)  //using a while loop to test while the value is not=0
    {
      sum = sum + value; //adding the value entered by the user and adding it to the sum
      x++;          //incrementing the value of x by 1

      if (value > maximum)  //using an If statement to test the conditions for maximum and minimum values
         maximum = value;

      else if (value < minimum)
        minimum = value;

      cout << "Enter next integer "; //asking the use to enter the next integer
      cin >> value;
    }

  if (x == 0) //If the user enters 0 the program will stop and shows a message
	  cout << "No numbers were found." << endl;
  else
    {
      cout.setf(ios::fixed);      //Magic Formulas
      cout.setf(ios::showpoint);
      cout.precision(2);

      average = (double)sum / (double)x;  //calculating the average and coverting the sum and x to double
      cout << "The Sum is "      << sum      << endl;
      cout << "The Average is "  << average  << endl;
      cout << "The smallest is " << minimum  << endl;
      cout << "The largest is "  << maximum  << endl;
    }
}
