#include <iostream>
using namespace std;

int main()
{

int num1, num2, num3, sum, product; //declaring statements
double average;

cout<< "Enter the First Integer: \n";//prompt the user to enter the first Integer
cin>> num1;
cout<< "Enter the Second Integer: \n";
cin>> num2;
cout<< "Enter the Third Integer: \n";
cin>> num3;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(1);

sum = num1 + num2 + num3;

cout<< "The sum is " << sum << endl;

average = sum/3.0;

cout<< "The average is " << average << endl;

product = num1 * num2 * num3;

cout<< "The Product is " << product << endl;

if (num1 > num2)
    if (num1 > num3)
        cout<< "The Largest is " << num1 << endl;
    else
        cout<< "The Largest is " << num3 << endl;
else
    if (num2 > num3)
        cout<< "The Largest is " << num2 << endl;
    else
        cout<< "The Largest is " << num3 << endl;

if (num1 < num2)
    if (num1 < num3)
        cout<< "The Smallest is " << num1 << endl;
    else
        cout<< "The Smallest is " << num3 << endl;
else
    if (num2 < num3)
        cout<< "The Smallest is " << num2 << endl;
    else
        cout<< "The Smallest is " << num3 << endl;


return 0;

}
