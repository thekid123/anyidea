//Alagba Blessing v223e376
//Assignment 8
//Descritpion: A program that calculates the factorial of a number and shows the combinatorial of the two numbers.

#include <iostream>
using namespace std;

int factorial(int a)    //A function for factorial
{
int fact = 1;   //declaring the variable

if ( a == 1) {    //if statement that determines if a is equal to 1
   fact = 1;
}
else {    //else statement that contains a while statement if a is greater than 1
while (a > 0)
{
  fact = fact * (a--);    //multiplying the fact by a and decreasing a by 1
}
return fact;  //returns the value for fact
}
}

int combinatorial(int number, int r)    //function for combinatorial for n and r
{
  int result = factorial(number)/((factorial(number-r)*factorial(r)));    //getting the value for result
  return result;
}


int check(int n, int r) {   //function for check to check n and r
  if (n <0 || r < 0 || r > n) { //if condition to find out if any of the statement is true
    cout << "Wrong values." << endl;   //prints a message for the if statement
    return 0;
  }
}

int main()
{
  int number;   //declaring variables
  int r;

  cout<< "Enter N: ";   //asking the user to enter N
  cin>> number;

  cout << "\nEnter R: ";   //asking the user to enter R
  cin >> r;

  check(number,r);   //checks the number entered for N and the number entered for R

  cout<< "The Factorial is: " <<factorial(number) <<endl;   //prints the N!
  cout<< "The combinatorial is: " <<combinatorial(number,r) <<endl;   //Prints the combinatorial
  return 0;
}
