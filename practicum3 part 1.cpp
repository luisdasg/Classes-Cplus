#include <iostream>
#include <string>

using namespace std;
string userString;
char userChar;
int CalcNumCharacters(string userString, char userChar) { // Function to calculate the number of occurrences of a character in a string
	int count = 0;
	for (char c : userString) { // Loop through each character in the string
		if (c == userChar) { // If the character matches the user input character, increment the count
			count++; // Increment the count of occurrences of the character in the string
		}
	}
	return count;

}
int main() {
	cin >> userChar;
	cin.ignore(); // Ignore the newline character left in the input buffer
	getline(cin, userString);
	int count = CalcNumCharacters(userString, userChar); // Call the function to calculate the number of occurrences of the character in the string
	if (count == 0) { // If the character does not occur in the string, print 0 and the character
		cout << count << " " << userChar << "'s" << endl; // Print the number of occurrences of the character in the string
	}
	if (count == 1) { // If the character occurs once in the string, print 1 and the character
		cout << count << " " << userChar << endl; // Print the number of occurrences of the character in the string
	}
	if (count > 1) {
		cout << count << " " << userChar << "'s" << endl;
	}
	return 0;
}