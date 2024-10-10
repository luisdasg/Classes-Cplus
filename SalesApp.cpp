#include "SalesClass.h"
#include <string>
int main()
{
    string name;
    int months;
    double ts;
    cout << "Enter the name of the store: ";
    //cin >> name;
    getline(cin, name); //the function works to get everything in the previos input so you can take names with a space in between
    SalesClass luis(name);
    cout << "How many months do you want to evaluate? ";
    cin >> months;
    for (int i=1; i<=months; i++)
    {
        cout << "Please enter the sales of the " << i << " month." << endl;
        cin >> ts;
        luis.SalesAcum(ts);
    }
    cout << "Welcome Manager of " << luis.getStoreName() << " location." << endl;
    cout << "The total Sales are " << luis.getTotalSales() << "$" << endl;
    cout << "The average will be " << luis.CalcAverage(months) << "$ per month." << endl;
}
