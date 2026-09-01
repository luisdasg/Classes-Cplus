// example of nested loops in C++
#include <iostream>
using namespace std;

int main() {
   int startNum;
   int endNum;
   int count;
   int i;
   int j;

   cin >> startNum;
   cin >> endNum;

   count = 0;
   i = 0;
   while (i <= startNum) { // Outer loop runs from 0 to startNum
      j = 0; // Reset j for each iteration of the outer loop
      while (j < endNum) { // Inner loop runs from 0 to endNum
         ++count; // Increment count for each iteration of the inner loop
         ++j; // Increment j to avoid infinite loop
      }
      ++i; // Increment i to avoid infinite loop
   }

   cout << "Inner loop ran " << count << " times" << endl;

   return 0;
}
// example of nested loops using for loops
#include <iostream>
using namespace std;

int main() {
   int startInput;
   int endInput;
   int count;
   int i;
   int j;

   cin >> startInput;
   cin >> endInput;

   count = 0; 
   for (i = 0; i <= startInput; i++) { // Outer loop runs from 0 to startInput
		for (j = 0; j <= endInput; ++j) { // Inner loop runs from 0 to endInput
         ++count; // Increment count for each iteration of the inner loop
      }
   }

   cout << "Inner loop ran " << count << " times" << endl;

   return 0;
}
// example of nested loops using for loops
#include <iostream>
using namespace std;

int main() {
   int numAsterisk;  // Number of asterisks to print
   int i;            // Loop counter
   
   numAsterisk = 0;

   while (numAsterisk >= 0) { // Continue until a negative number is entered
      cout << "Enter an integer (negative to quit): "; // Prompt user for input
      cin >> numAsterisk;
      
      if (numAsterisk >= 0) { // Check if the input is non-negative
         cout << "Depicted graphically:" << endl; // Output message
         for (i = 1; i <= numAsterisk; ++i) { // Loop to print asterisks
            cout << "*"; // Print an asterisk for each count
         }
         cout << endl << endl; // Print two newlines for spacing >=
      }
   }
   
   cout << "Goodbye." << endl;

   return 0;
}
// example of nested loops using for loops
#include <iostream>
using namespace std;

int main() {
   int userVal;
   int i;
   int j;

   cin >> userVal;
   for (i = 1; i <= userVal; i++) { // Outer loop runs from 1 to userVal
      cout << i; // Print the current value of i
      for (j = 1; j <= i; j++) { // Inner loop runs from 1 to the current value of i
         cout << "!"; // Print an exclamation mark for each iteration of the inner loop
      }
      cout << endl;
   }
   return 0;
}
// example of nested loops using for loops
#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentRowInteger;
   int currentColumn;
   char currentColumnLetter;
   
   cin >> numRows; // Read the number of rows from user input
   cin >> numColumns; // Read the number of columns from user input

   for (currentRow = 1; currentRow <= numRows; currentRow ++ ) { // Outer loop runs from 1 to numRows
      for(currentColumn = 0; currentColumn < numColumns; currentColumn++) { // Inner loop runs from 0 to numColumns - 1
         currentColumnLetter = 'A' + currentColumn; // Convert the current column index to a letter (A, B, C, ...)
         cout << currentRow << currentColumnLetter << " "; // Print the current row number followed by the corresponding column letter
      }
      cout << endl;
   }
   return 0;
}