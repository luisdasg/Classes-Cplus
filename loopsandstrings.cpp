// example of nested loops in C++
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string keyStr;
   int i;
   int count;
   
   getline(cin, keyStr); // Read a line of input from the user and store it in keyStr
   count = 0; // Initialize count to 0 to keep track of the number of alphabet letters in keyStr
   
   for (i = 0; i < keyStr.length(); ++i) { // Loop through each character in the key string
      if (isalpha(keyStr.at(i))) { // Check if the character is an alphabet letter
         ++count; // Increment the count for each alphabet letter found
      }
   }
   if (count <= 6 && keyStr.length() >= 5) { // Check if the count of alphabet letters is less than or equal to 6 and the length of the key string is at least 5
      cout << "Valid" <<  endl; // Print "Valid" if the conditions are met
   }
   else {
      cout << "Invalid" << endl; // Print "Invalid" if the conditions are not met
   }   
   return 0;
}
// example of string manipulation in C++
#include <iostream>
#include <string>
using namespace std;

int main() {
   string keyWord;
   int index;
   
   cin >> keyWord;

   index = 0; // Initialize index to 0 to start searching for the substring "asdf" from the beginning of keyWord

   index = keyWord.find("asdf"); // Find the first occurrence of the substring "asdf" in keyWord and store its index in the variable index
   while (index != string::npos) { // Continue the loop as long as "asdf" is found in keyWord, npos indicates that the substring was not found
      keyWord.replace(index, 4, ""); // Replace the substring "asdf" with an empty string, effectively removing it from keyWord
      index = keyWord.find("asdf"); // Search for the next occurrence of "asdf" in keyWord after the previous replacement
   }
   cout << "Updated password: " << keyWord << endl; //  Print the updated keyWord after all occurrences of "asdf" have been removed
   
   return 0;
}