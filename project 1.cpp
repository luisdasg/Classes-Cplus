// Peg Game by Luis Sequera CS 141
// 9/6/2026
#include <iostream>
#include <string>

using namespace std;
char pegA = '.';
char pegB = 'T';
char pegC = 'T';
char pegD = 'T';
char pegE = 'T';
char pegF = 'T';
char pegG = 'T';
char pegH = 'T';
char pegI = 'T';
char pegJ = 'T';
char pegK = 'T';
char pegL = 'T';
char pegM = 'T';
char pegN = 'T';
char pegO = 'T';

void DisplayPegs()
{
	cout << "    " << pegA << "            A" << endl;
	cout << "   " << pegB << " " << pegC << "          B C" << endl;
	cout << "  " << pegD << " " << pegE << " " << pegF << "        D E F" << endl;
	cout << " " << pegG << " " << pegH << " " << pegI << " " << pegJ << "      G H I J" << endl;
	cout << pegK << " " << pegL << " " << pegM << " " << pegN << " " << pegO << "    K L M N O" << endl;
}

char GetPeg(char peg) // Function to get the peg character based on the input
{
	switch (peg) {
	case 'A':
		return pegA;
	case 'B':
		return pegB;
	case 'C':
		return pegC;
	case 'D':
		return pegD;
	case 'E':
		return pegE;
	case 'F':
		return pegF;
	case 'G':
		return pegG;
	case 'H':
		return pegH;
	case 'I':
		return pegI;
	case 'J':
		return pegJ;
	case 'K':
		return pegK;
	case 'L':
		return pegL;
	case 'M':
		return pegM;
	case 'N':
		return pegN;
	case 'O':
		return pegO;
	default:
		return '.';
	}
}
void setPeg(char peg, char value) { // Function to set the peg character based on the input
	switch (peg) {
	case 'A':
		pegA = value;
		break;
	case 'B':
		pegB = value;
		break;
	case 'C':
		pegC = value;
		break;
	case 'D':
		pegD = value;
		break;
	case 'E':
		pegE = value;
		break;
	case 'F':
		pegF = value;
		break;
	case 'G':
		pegG = value;
		break;
	case 'H':
		pegH = value;
		break;
	case 'I':
		pegI = value;
		break;
	case 'J':
		pegJ = value;
		break;
	case 'K':
		pegK = value;
		break;
	case 'L':
		pegL = value;
		break;
	case 'M':
		pegM = value;
		break;
	case 'N':
		pegN = value;
		break;
	case 'O':
		pegO = value;
		break;
	}
}
int row(char peg)
{
	switch (peg) {
	case 'A':
		return 1;
	case 'B':
	case 'C':
		return 2;
	case 'D':
	case 'E':
	case 'F':
		return 3;
	case 'G':
	case 'H':
	case 'I':
	case 'J':
		return 4;
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
		return 5;
	default:
		return 0;
	}
}

int col(char peg)
{
	switch (peg) {
	case 'A':
		return 1;
	case 'B':
		return 1;
	case 'C':
		return 2;
	case 'D':
		return 1;
	case 'E':
		return 2;
	case 'F':
		return 3;
	case 'G':
		return 1;
	case 'H':
		return 2;
	case 'I':
		return 3;
	case 'J':
		return 4;
	case 'K':
		return 1;
	case 'L':
		return 2;
	case 'M':
		return 3;
	case 'N':
		return 4;
	case 'O':
		return 5;
	default:
		return 0;
	}
}
bool IsValidPegs(char startPeg, char middlePeg, char endPeg) // Function to check if the move is valid
{
	if (startPeg == 'T' && middlePeg == 'T' && endPeg == '.') {
		return true;
	}
	else {
		return false;
	}
}
int CountPegs() // Function to count the number of pegs remaining
{
	int count = 0;

	if (pegA == 'T') count++; // Count the number of pegs remaining
	if (pegB == 'T') count++;
	if (pegC == 'T') count++;
	if (pegD == 'T') count++;
	if (pegE == 'T') count++;
	if (pegF == 'T') count++;
	if (pegG == 'T') count++;
	if (pegH == 'T') count++;
	if (pegI == 'T') count++;
	if (pegJ == 'T') count++;
	if (pegK == 'T') count++;
	if (pegL == 'T') count++;
	if (pegM == 'T') count++;
	if (pegN == 'T') count++;
	if (pegO == 'T') count++;

	return count;
}
bool IsValidMove(char start, char middle, char end)
{
	int startRow = row(start);
	int middleRow = row(middle);
	int endRow = row(end);

	int startCol = col(start);
	int middleCol = col(middle);
	int endCol = col(end);

	// Invalid letters
	if (startRow == 0 || middleRow == 0 || endRow == 0)
		return false;

	int rowChange1 = middleRow - startRow;
	int rowChange2 = endRow - middleRow;

	int colChange1 = middleCol - startCol;
	int colChange2 = endCol - middleCol;

	// Both steps must move in exactly the same direction
	if (rowChange1 != rowChange2 ||
		colChange1 != colChange2)
		return false;

	// Horizontal
	if (rowChange1 == 0 &&
		(colChange1 == 1 || colChange1 == -1))
		return true;

	// One diagonal direction
	if (colChange1 == 0 &&
		(rowChange1 == 1 || rowChange1 == -1))
		return true;

	// Other diagonal direction
	if ((rowChange1 == 1 && colChange1 == 1) ||
		(rowChange1 == -1 && colChange1 == -1))
		return true;

	return false;
}
string CheckMove(string move) // Function to check if the move is valid
{
	if (move == "Q") {
		return "Quit";
	}
	if (move.length() != 3) {
		return "Invalid";
	}
	char startPeg = GetPeg(move[0]); // Get the peg character based on the input
	char middlePeg = GetPeg(move[1]); // Get the peg character based on the input
	char endPeg = GetPeg(move[2]); // Get the peg character based on the input
	if (IsValidMove(move[0], move[1], move[2])) {
		if (IsValidPegs(startPeg, middlePeg, endPeg)) {
			setPeg(move[0], '.');
			setPeg(move[1], '.');
			setPeg(move[2], 'T');
			return "Valid";
		}
		else {
			return "Invalid";
		}
	}
	else {
		return "Invalid";
	}
}
int main()
{
	string move;
	string result = "";
	DisplayPegs(); // Call the function to display the pegs
	while (result != "Quit") {
		cout << "Enter move (for example FCA) or Q to quit: " << endl;
		cout << endl;
		getline(cin, move);
		result = CheckMove(move); // Check if the move is valid
		if (result == "Invalid") { // If the move is invalid, display an error message
			cout << "Move is not valid. Try again." << endl;
			cout << endl;
			DisplayPegs();
		}
		else if (result == "Valid") {
			if (CountPegs() == 1) { // Check if there is only one peg left
				cout << "You win! Congratulations!" << endl;
				return 0;
			}
			else
			{
				cout << endl;
				DisplayPegs(); // Display the pegs after a valid move
			}
		}
		
	}
}