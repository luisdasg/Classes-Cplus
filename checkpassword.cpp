#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string passwordStr;
   unsigned int i;
   
   getline(cin, passwordStr);
   for (i = 0; i < passwordStr.length(); i++) { // Loop through each character in the password string
      if (!isdigit(passwordStr[i])) { // Check if the character is not a digit
         passwordStr[i] = '1'; // Replace non-digit characters with '1'
      }
   }
   
   
   cout << "Valid password: " << passwordStr << endl;
   
   return 0;
}