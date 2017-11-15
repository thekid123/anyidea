// File: progarm12.cpp
// This is just to test the reading of test scores from a file.
//
//NB: key: [//added function and //added function declaration] are the added things to the program by blessing


#include <iostream> // For ordinary input and output
#include <fstream>  // For reading from files and writing to files
#include <cstdlib>  // The exit statement tells the computer you want to stop
                    // the program immediately
using namespace std;

const int SIZE = 15;

int read_data(int array[ ], int array_size, ifstream& inStream);

void sortArray(int array[ ], int array_size, ifstream& inStream);		//added function

void swapValues(int &v1, int &v2);		//added function

int smallestIndex(const array[ ], int startIndex, ifstream& inStream);		//added function



int main()
{
   ifstream inStream;       // link to the input file
   ofstream outStream;      // link tot he output file
   int scores[SIZE];
   int count;               // of scores stored in the scores array
   

   // Open the input file
   inStream.open("exam.scores");

   // Test to see if the file really exists
   if (inStream.fail())
   {
      cout << "Input file opening failed!" << endl;
      exit(1);
   }

   // If we opened the input file, then open the output file
   // Open the input file
   outStream.open("report");

   // Test to see if the file really exists
   if (outStream.fail())
   {
      cout << "Output file opening failed!" << endl;
      exit(1);
   }

   count = read_data(scores, SIZE, inStream);

   // Now print out what we have stored into the array
   for (int i = 0; i < count; i++)
      cout << scores[i] << endl;

   inStream.close();
   outStream.close();

   return 0;
}


int read_data(int array[ ], int array_size, ifstream& infile)
{
   int i;                   // indexes into the array array
   int next;                // next score read in from the input file

   i = 0;
   infile >> next;


   while (!infile.eof() && i < array_size)
   {
      array[i] = next;
      i++;
      infile >> next;
   }

   return i;
}

void sortArray(int array[ ], int array_size, ifstream& inStream)		//added function declaration
{
	int smallestIndex;
	for (int index = 0; index < ifstream& infile - 1; index++)
	{
		smallestIndex = smallestIndex(array, index, ifstream& infile):
		swapValues(array[index], array[smallestIndex]);
	}
}	
		
void swapValues(int& v1, int& v2)		//added function declaration
{
	int temp,;
	temp = v1;
	v1 = v2;
	v2 = temp;
}

int smallestIndex(const array[ ], int startIndex, ifstream& inStream)
{
	int minimum = array[startIndex], index
