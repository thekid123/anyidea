#include <iostream>
using namespace std;

int main()
{

int num1, num2, num3, sum, product; //declaring statements
double average;

cout<< "Enter the First Integer \n";//prompt the user to enter the first Integer
cin>> num1;
cout<< "Enter the Second Integer \n";
cin>> num2;
cout<< "Enter the Third Integer \n";
cin>> num3;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(1);

sum = num1 + num2 + num3;

cout<< "The sum is \n" << sum;

average = sum/3.0;

cout<< "The average is \n" << average;

product = num1 * num2 * num3;

cout<< "The Product is \n " << product;

if (num1 > num2)
    if (num1 > num3)
        cout<< "The Largest is" << num1;
    else 
        cout<< "The Largest is" << num3;
else 
    if (num2 > num3)
        cout<< "The Largest is" << num2;
    else
        cout<< "The Largest is" << num3;   

return 0;

}

 
















}
