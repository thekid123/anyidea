#include <iostream>
using namespace std;

int factorial(int a)
{
int fact = 1;

while (a > 0)
{
  fact = fact * (a--);
}
return fact;
}

int main()
{
  int number;

  cout<< "Enter a number: ";
  cin>> number;

  cout<< "The Factorial is: " <<factorial(number) <<endl;


  return 0;
}
