#include "Greetings.h"

int main()
{
    string n;
    int y;
    cout << "Enter your name: \n";
    getline(cin, n);
    cout << "Enter the year you were born: " << endl;
    cin >> y;
    Greetings luis(n, y);
    luis.PrintMessage();
    
}

