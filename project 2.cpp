///  @brief CS 141 Project - Word Search - Skeleton
///  @author [Luis Sequera]
///  @date [9/14/26]
///  CS 141 Fall 2026, Professor Koehler and Professor Gu

#include <algorithm>    // sort, invoked from ranges as ranges::sort(...)
#include <array>        // C++ array container
#include <fstream>      // input & output with file stream buffers
#include <iostream>     // input & output with character buffers (cin/cout)
#include <span>         // Needed for modern C++ container printing
#include <string>       
#include <string_view>  // Utilized to pass strings that should not change
#include <vector>       // C++ vector container

using namespace std;

// The puzzle will always have exactly 20 columns.
// constexpr is used here to fulfill a compile-time requirement for arrays.
constexpr int numCols = 20;

void readPuzzle(vector<array<char, numCols>>& puzzle, vector<string>& wordBank, string_view filename);

void searchPuzzle(const vector<array<char, numCols>>& puzzle, const vector<string>& wordBank, vector<string>& discovered);

void printElements(span<const string> v);

// TODO: Declare any helper functions you plan to use here.
// They may follow a similar parameter pattern to the searchPuzzle function but may not need
// all the arguments that the entire searchPuzzle function needs. However, they may need other
// information such as where to start looking from so you do not need to repeat all the logic of
// the primary searchPuzzle function.


int main()
{
    cout << "Welcome to the Word Search Project!" << endl;
    cout << "Enter the puzzle filename: " << endl;
    string filename;
    int initialRows;
    int initialWords;
    // TODO: acquire the filename from user input and open it for reading using an ifstream
    cin >> filename;
    // TODO: grab the array row dimension and amount of words from the file
    ifstream inputFile(filename);
    // store them in local integer variables (e.g., initialRows, initialWords)
    inputFile >> initialRows;
    inputFile >> initialWords;
    // TODO: close the file (you will open it again later in readPuzzle)
    inputFile.close();
    // TODO: initialize the structures with the dimensions grabbed from the file
    //       HINT: use the vector class' resize member function
    vector<array<char, numCols>> puzzle;

    vector<string> wordBank;
    puzzle.resize(initialRows);
    wordBank.resize(initialWords);
    // TODO: implement function (invoked here) to store the puzzle in our container
    readPuzzle(puzzle, wordBank, filename);

    // set up discovery vector
    vector<string> discovered;

    // search for words from the word bank
    searchPuzzle(puzzle, wordBank, discovered);

    // sort the results using the modern ranges library
    ranges::sort(discovered);

    // Print sequence of discovered words
    printElements(discovered);

    return 0;
}

// TODO: implement the readPuzzle function using file IO 
// Hint: Remember to use .at() for all bounds-checked access instead of square brackets!
void readPuzzle(vector<array<char, numCols>>& puzzle, vector<string>& wordBank, string_view filename) { // read the puzzle and word bank from the file
    int rows;
    int words;
    int i;
    int j;
	ifstream inputFile{ string(filename) }; // open the file for reading
	inputFile >> rows; // read the number of rows
	inputFile >> words; // read the number of words
	for (i = 0; i < rows; i++) { // read the puzzle into the vector of arrays
		for (j = 0; j < numCols; j++) { // read each character into the puzzle
			inputFile >> puzzle.at(i).at(j); // read each character into the puzzle
        }
    }
	for (i = 0; i < words; i++) { // read the word bank into the vector of strings
		inputFile >> wordBank.at(i); // read each word into the word bank
    }
	inputFile.close(); // close the file
} 

// TODO: implement searchPuzzle and any helper functions you choose to create
void searchPuzzle(const vector<array<char, numCols>>& puzzle, const vector<string>& wordBank, vector<string>& discovered) { // search for words in the puzzle and add them to the discovered vector
	int numRows = static_cast<int>(puzzle.size()); // get the number of rows in the puzzle
	int numWords = static_cast<int>(wordBank.size()); // get the number of words in the word bank
	for (int i = 0;i < numWords;i++) { // iterate through each word in the word bank
		string word = wordBank.at(i); // get the current word
		int wordLength = static_cast<int>(word.size()); // get the length of the current word
		bool wordFound = false; // initialize a boolean variable to track if the word is found
		for (int row = 0; row < numRows; row++) { // iterate through each row in the puzzle
			for (int col = 0; col < numCols; col++) { // iterate through each column in the puzzle
				if (puzzle.at(row).at(col) == word.at(0)) { // check if the first letter of the word matches the current letter in the puzzle
					if (col + wordLength - 1 < numCols) { // check if the word can fit to the right
						bool foundright = true; // initialize a boolean variable to track if the word is found to the right
						for (int letter = 0; letter < wordLength;letter++) { // iterate through each letter in the word
							if (puzzle.at(row).at(col + letter) != word.at(letter)) { // check if the current letter in the puzzle matches the current letter in the word
                                foundright = false; 
                                break; 
                            }
                        }
						if (foundright) { // if the word is found to the right, set wordFound to true
                            wordFound = true;
                        }
                    }
					if (col - wordLength + 1 >= 0) { // check if the word can fit to the left
                        bool foundleft = true;
						for (int letter = 0;letter < wordLength; letter++) {    // iterate through each letter in the word
							if (puzzle.at(row).at(col - letter) != word.at(letter)) { // check if the current letter in the puzzle matches the current letter in the word
                                foundleft = false; 
                                break;
                            }
                        }
                        if (foundleft) {
                            wordFound = true;
                        }
                    }
					if (row + wordLength - 1 < numRows) { // check if the word can fit downwards
                        bool founddown = true;
                        for (int letter = 0; letter < wordLength; letter++) {
                            if (puzzle.at(row + letter).at(col) != word.at(letter)) {
                                founddown = false;
                                break;
                            }
                        }
                        if (founddown) {
                            wordFound = true;
                        }
                    }
					if (row - wordLength + 1 >= 0) { // check if the word can fit upwards
                        bool foundup = true;
                        for (int letter = 0;letter < wordLength; letter++) {
                            if (puzzle.at(row - letter).at(col) != word.at(letter)) {
                                foundup = false;
                                break;
                            }
                        }
                        if (foundup) {
                            wordFound = true;
                        }
                    }
					if (row + wordLength - 1 < numRows && col + wordLength - 1 < numCols) { // check if the word can fit downwards and to the right
                        bool founddownright = true;
                        for (int letter = 0; letter < wordLength; letter++) {
                            if (puzzle.at(row + letter).at(col + letter) != word.at(letter)) {
                                founddownright = false;
                                break;
                            }
                        }
                        if (founddownright) {
                            wordFound = true;
                        }
                    }
					if (row + wordLength - 1 < numRows && col - wordLength + 1 >= 0) { // check if the word can fit downwards and to the left
                        bool founddownleft = true;
                        for (int letter = 0; letter < wordLength; letter++) {
                            if (puzzle.at(row + letter).at(col - letter) != word.at(letter)) {
                                founddownleft = false;
                                break;
                            }
                        }
                        if (founddownleft) {
                            wordFound = true;
                        }
                    }
					if (row - wordLength + 1 >= 0 && col + wordLength - 1 < numCols) { // check if the word can fit upwards and to the right
                        bool foundupright = true;
                        for (int letter = 0; letter < wordLength; letter++) {
                            if (puzzle.at(row - letter).at(col + letter) != word.at(letter)) {
                                foundupright = false;
                                break;
                            }
                        }
                        if (foundupright) {
                            wordFound = true;
                        }
                    }
					if (row - wordLength + 1 >= 0 && col - wordLength + 1 >= 0) { // check if the word can fit upwards and to the left
                        bool foundupleft = true;
                        for (int letter = 0; letter < wordLength; letter++) {
                            if (puzzle.at(row - letter).at(col - letter) != word.at(letter)) {
                                foundupleft = false;
                                break;
                            }
                        }
                        if (foundupleft) {
                            wordFound = true;
                        }
                    }
                }
            }
        }
		if (wordFound) { // if the word is found, add it to the discovered vector
            discovered.push_back(word);
        }
    }
}

// TODO: implement element by element printing
void printElements(span<const string> v) { // print each element in the vector
	for (const string& word : v) { // iterate through each word in the vector
		cout << word << endl; // print the word
    }
}