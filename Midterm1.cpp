#include "DateClass.h"

int main()
{
    int m;
    int d;
    int y;
    cout << "FIRST PART MIDTERM" << endl;
    cout << "==================" << endl;
    cout << "Enter the month as Integer ==> ";
    cin >> m;
    cout << "Enter the day as Integer ==> ";
    cin >> d;
    cout << "Enter the year as Integer ==> ";
    cin >> y;
    DateClass luis(d, m, y);
    
    luis.PrintMonth();
    

}

