/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Assignment Operator Excercise.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream.h>
#include <fstream.h>

/* Constants and defines */

/****************************************************************
 *
 * Description: strip
 *
 * Returns: void
 *
 * Pre-Conditions: in and out must be valid file streams
 * 
 * Post Conditions: 
 *    The content of in without whitespace is transfered to out
 *
 ***************************************************************/

void strip(ifstream& in, ostream& out) {
   char buffer[1000];
   while ( !in.eof() ) {
      in >> buffer;
      out << buffer;
   }
}

/****************************************************************
 *
 * Description: main
 *   Requires two parameters, <input file> <output file>
 *
 * Returns: int
 *
 * Pre-Conditions: None
 * 
 * Post Conditions:
 *  if a valid input file and output file is provided ->
 *    creates a new (or overwrites the old) output file
 *    with the content of the inputfile. However does not
 *    transfer the white spaces.
 *    returns 0;
 *  else ->
 *    prints appropriate help message,
 *    returns 1
 *    
 *
 ***************************************************************/
int main(int argc, char* argv[]) {
  int retVal = 1; // default return value from main is failure
  ifstream inputFile;  // input stream
  ofstream outputFile; // output stream

  if (argc != 3) { // must have an input and output stream
    cout << "Incorrect number of parameters: usage stripper infile outfile" << endl;
  } else {
    inputFile.open( argv[1] );
    if ( !inputFile.is_open() ) {
      cout << argv[1] << " not found" << endl;
    } else {
      outputFile.open( argv[2] );
      strip( inputFile, outputFile );
      retVal = 0;
    }
  }
  return retVal;
}
