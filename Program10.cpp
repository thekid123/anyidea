//Program 10
//Description: Gets the input amount in dollars and cents and convert them to respective quarters, dimes and pennies. 


#include <iostream>
using namespace std;

void introduction();
void get_input(int &dollars, int &cents);
bool check_input(int dollars, int cents);
void determine_coins(int dollars, int cents, int &quarters, int &dimes, int &pennys);
void display_output();

int dollars, cents, quarters, dimes, pennys; //Global Variables, as they are used through out the program. 
bool check; 

int main() {
	char choice = 'y';

	void introduction();  
	
	while (choice == 'y') {     //The loop works works as long as the choice of character is y.
	get_input(dollars, cents);
        check_input(dollars, cents);
		if (check == false) {
 			cout << "Enter a value less than 5 dollars. Terminating Program." << endl;
 			return 0;
		}
	display_output();
	cout << "Do you have another amount? (Type y for yes or n for no): ";
	cin >> choice; 
	cout << endl;
	}
	return 0;   // Terminates the program in case user quits the loop succesfully. 
}

void introduction() {
 	cout << "This Program will determne the coin change in quarters, dimes and pennies in your amount of money. (5 dollars or less)." 		<< endl;
}

void get_input(int &dollars, int &cents) {
	cout << "Enter dollars: ";
	cin >> dollars;
   	cout << "Enter cents: ";
	cin >> cents;
	cout << endl;
	determine_coins(dollars,cents,quarters, dimes,pennys); //The function for coin determination.
}

bool check_input(int dollars, int cents) {
	int total = (dollars * 100) + cents;   //Converts the money to cents.
	if (total >= 500) {
		check = false;
		return false;       //Returns false, if the test doesn't follow.
	}
	else {
	 	check = true;
		return true;
	}
} 

void determine_coins(int dollars, int cents, int &quarters, int &dimes, int &pennys) {
	int total = (dollars * 100)+cents;  // Converts the money to cents.
	quarters = total/25;                // Converts the dollar to quarters
	total = total - (25*quarters);      // Subtracts the amount of money already converted.
	dimes = (total/10);		    // Converts money left to dimes.	
	total = total - (dimes*10); 	    // Subtracts the money left.				
	pennys = total;			    // The left amount is assigned as pennies.	
}

void display_output(void) {
        if (dollars > 0)
		cout << dollars << " dollar(s) and " << cents << " cent(s) can be given as: " << endl;
	else 
		cout << cents << " cents can be given as: " << endl;

// A series of if else statements according to amount of quarters, dimes and pennies. 

        if (quarters > 0 && dimes > 0 && pennys > 0) 
		cout << quarters << " quarter(s) " << dimes << " dime(s) and " << pennys << " pennys";
        if (quarters == 0 && dimes > 0 && pennys > 0) 
		cout << dimes << " dime(s) and " << pennys << " pennys";
        if (quarters == 0 && dimes == 0 && pennys > 0) 
		cout << pennys << " pennys";
  	if (quarters > 0 && dimes == 0 && pennys > 0) 
		cout << quarters << " quarter(s) and " << pennys << " pennys";
	if (quarters > 0 && dimes > 0 && pennys == 0)
		cout << quarters << " quarter(s) " << dimes << " and dime(s)"; 
	cout << endl;	
}


