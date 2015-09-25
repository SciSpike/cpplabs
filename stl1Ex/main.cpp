/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for STL1. 
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream.h>
#include <vector>

/* Constants and defines */
using namespace std;

int main() {
   vector<int> v;
   int i;
   cout << "Enter positive integers followed by 0" << endl;

   while (cin >> i, i != 0)
      v.push_back(i);

   vector<int>::iterator it;

   for (it = v.begin(); it != v.end(); ++it )
      cout << *it << " ";
   cout << endl;

   return 0;
}
