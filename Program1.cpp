//Alagba Blessing
//ID: v223e376
//Description: a program that represents a bank account and money respectively, and write functions that allow us to interact with other accounts

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

//Structure for Money:
struct Money
{
    double dollars;
    double cents;
};

struct Account
{
    string name;
    Money money;
    double Rate;
};

//Array to store more than 1 Account
Account account[10];
int numOfAccount = 10;

void convertCents(double x, Account &account);
Account createAccount();
Account deposit(Account account, Money money);
Money withdraw(Account &account, Money withdraw);
void accrue(Account &account);
void print();

int main()
{

}


 void convertCents(double x, Account &account){
    int balance = x * 100;
    account.money.dollars = round(x);
    account.money.cents = balance - round(x)*100;

}

Account createAccount()
{
    double balance;
    for (int x = 0; x <= 10; x++){
        cout<< "Lets set up your account" <<endl;
        cout<< "First, Whats the name of your account";
        cin >> account[x].name;
        cout<< "What is the Interest rate of your account";
        cin>> account[x].Rate;
        cout<< "Finally, what is the starting balance of your account";
        cin>> balance;
        convertCents(balance,account[x]);
    }
}

Account deposit(Account account, Money money){
double balance;
double x;
    cout<< "How much do you want to deposit? ";
    cin>> x;
        convertCents(balance,account[x]);


}


Money withdraw(Account &account, Money withdraw){
    double y;
    cout<<"how much would you like to withdraw?";
    cin>> y;
    convertCents(balance,account[y]);

}
