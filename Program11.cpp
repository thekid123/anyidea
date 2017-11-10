//Alagba Blessing ID: v223e376
//Assignment 11
//Description: A Program that deletes repeated characters from a string
//Assignment name: Program11.cpp



#include <iostream>
#include <string>
using namespace std;

int readInput(char array[],int max_size){		//Declaring my readInput Function
	int position = 0;
	int size = 20;
	max_size = size;
	cout<< "Enter characters up to 20 and enter a period (.) to stop";
	cout<< endl;
	while(position < max_size)		//while condition to test if the position is less than the maximum size
	{	
		cin>> array[position];
	
	if (array[position] == '.')		//if user enters period(.) the program will stop at the last character the user entered
	{
		break;
	}
	position++;
}
return position;

}
void displayArray(const char array[], int count){		//Declaring a function for displayArray
	
	int position = 0;
	cout<< "the characters entered was ";
	
	while (position < count){
		cout<< array[position] ;
		position++;
	}
	cout<< endl;
}


void deleteRepeats(char array[], int& count){		//Declaring a function for deleteRepeats
	
for (int position = 0; position < count; position++)		//using a for loop to test the condition
	{
		for (int nextposition = position + 1; nextposition < count; nextposition++)
			{
				if (array[position] ==array[nextposition])
				{
					for (int np = nextposition; np < count; np++)
						{
							array[np] = array[np + 1];
						}
						count--;
						nextposition--;
				}
			}
		}
	}	





int main(){
	int count = 0;
	int size =20;
	
	char array[size];
	
	count = readInput(array, size);
	
	displayArray(array, count);
	
	deleteRepeats(array, count);
	
	displayArray(array, count);
}











	








