//Alagba Blessing v223e376
//Program 7
// Description:Prints the calendar for the year and also prints the leap year if the user picks to print a leap year.

#include <iomanip>
#include <iostream>
using namespace std;

int leap_day, day_code;  //Initializing Variables of leap year, day code and days.
int days;

  int days_31(){ //a function to print the calender for the moths that have 31 days and also setting the width of the calender

          cout << "  S  M  T  W  T  F  S" << endl;
          for (int i = 0; i < day_code; ++i)
              cout << setw(3) << "";

          for (int days = 0; days < 31; ++days, ++day_code) { //printing the months that have 31 days
              if (day_code == 7) {
                  cout << '\n';
                  day_code = 0;
              }
              cout << setw(3) << days + 1;
          }

          if (day_code != 7) {
              cout << '\n';
          }
          cout << endl;
     }

      int days_30(){    //a function to print the months that have 30 days in it
          cout << "  S  M  T  W  T  F  S" << endl;
          for (int i = 0; i < day_code; ++i)
              cout << setw(3) << "";

          for (int days = 0; days < 30; ++days, ++day_code) {   //prints the months that have 30 days in it
              if (day_code == 7) {
                  cout << '\n';
                  day_code = 0;
              }
              cout << setw(3) << days + 1;
          }

          if (day_code != 7) {
              cout << '\n';
          }
          cout << endl;
      }

  int days_feb(){ //A function for february
          int number_days = 28; //to print February with 28 days
          if (leap_day == 1) //if the leap day code is 1
            number_days = 29;   //February will end with 29 days
          cout << "  S  M  T  W  T  F  S" << endl;
          for (int i = 0; i < day_code; ++i)
              cout << setw(3) << "";

          for (int days = 0; days < number_days; ++days, ++day_code) {   //Printing the calender for february
              if (day_code == 7) {
                  cout << '\n';
                  day_code = 0;
              }
              cout << setw(3) << days + 1;
          }

          if (day_code != 7) {
              cout << '\n';
          }
          cout << endl;
      }

  int main()
  {
     cout << "enter the day code from 0-6 to print the starting of the week (Sun to Sat). ";
cin >> day_code;
     cout << "\nPlease enter 1 for a leap year or 0 for not a leap year, NB: 1-LEAP YEAR and 0-NOT A LEAP YEAR ";
      cin >> leap_day;
     cout << "\n";

     while ( (day_code >=0 && day_code <= 6)  || (leap_day == 0 && leap_day == 1)) {
     cout <<"        JANUARY\n";   //Prints the month according to the function in which they are called.
     days_31();
     cout <<"       FEBURARY\n";
     days_feb();
     cout << "         MARCH\n";
     days_31();
     cout << "         APRIL\n";
     days_30();
     cout << "           MAY\n";
     days_31();
     cout << "          JUNE\n";
     days_30();
     cout << "          JULY\n";
     days_31();
     cout << "        AUGUST\n";
     days_31();
     cout << "     SEPTEMBER\n";
     days_30();
     cout << "       OCTOBER\n";
     days_31();
     cout << "      NOVEMBER\n";
     days_30();
     cout << "      DECEMBER\n";
     days_31();
     break;
     }
  }
