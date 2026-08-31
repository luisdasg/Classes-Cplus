#include <iostream>
using namespace std;

int main() {
   int valueIn;
   int outputVal;

   outputVal = 0;
   cin >> valueIn;

   while(valueIn >= 0) {
      if (valueIn % 2 != 0) {   //returns true if x % 2 != 0 is even
         cout << "lose" << endl;
      }
      else {
         cout << "win" << endl;
         outputVal = outputVal + 1;
      }
      cin >> valueIn;
   }
   

   cout << "Output value is " << outputVal << endl;

   return 0;
}