// File: progarm12.cpp
// This is just to test the reading of test scores from a file.
//
#include <iostream> // For ordinary input and output
#include <fstream>  // For reading from files and writing to files
#include <cstdlib>  // The exit statement tells the computer you want to stop
                    // the program immediately
using namespace std;

const int SIZE = 15;

int read_data(int array[ ], int array_size, ifstream& inStream);

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
