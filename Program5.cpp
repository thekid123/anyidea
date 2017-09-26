//Alagba Blessing ID: v223e376
//Assignment 5
//Description: Finding out the years that are >= 1582 if they are a leap year or not

#include <iostream>
using namespace std;

int main()
{
  int y;    //declaring variables

  cout<< "Enter any year >= 1582 to test for a leap year (a year == 0 will terminate): "; //asking the user to enter a year >= 1582 and if the user enters 0 the progrm will terminate
  cin>> y;

  while (y != 0)    //using a loop system to test the condition when the input is not 0 and it goes through a series of If Statements
{
  if (y %4 == 0)   //Finding out if the year entered by the user is divided by 4 and it gives no remainder
  {
    if ( y %100 == 0)   //the year entered by the user is also divided by 100 and gives no remainder
    {
      if ( y %400 == 0)   //the year entered by the user is also divided by 400 and it gives no remainder
              cout<< year << "is a leap year. ";    //if it passes the conditon than it is a leap year
      else
              cout<< year << "is not a leap year. ";
    }
    else
        cout<< year << "is not a leap year. ";    //if it does not pass the condition it is not a leap year
  }
  else
      cout<< year << "is not a leap year. ";

cout<< endl;
cout<< endl;
cout<< endl;

cout<< "Enter any year >= 1582 to test for a leap year (a year == 0 will terminate): ";   //once the loop finishes it shows the same statement again
cin>> y;
}

return 0;
}
