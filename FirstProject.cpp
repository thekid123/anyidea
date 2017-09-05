#include <iostream>
using namespace std;

int main()
{
  int x, y;
  int operation;
  int sum, sub, multiply, division;

  cout<< "Enter First Integer: \n";
  cin>> x;
  cout << "Enter Second Integer: \n";
  cin>> y;

  cout<< "Available options are: 1-Add, 2-Subtract, 3-Multiply, 4-Divide. Enter the Number for the Operation that you want:";
          cin >> operation;
  if (operation == 1)
  {
    sum = x + y;
    cout<< "The value is:" << sum;
  }

    if (operation == 2)
    {
    sub = x - y;
    cout<< "The value is:" << sub;
    }

   if (operation == 3)
  {
  multiply = x * y;
  cout<< "The value is:" << multiply;
  }

   if (operation == 4)
     {
  if (y == 0)
  {
    cout<< "Division by 0 is not possible";
  }

  division = x / y;
  cout<< "The value is:" << division;
     }
}
