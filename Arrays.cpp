#include <iostream>
using namespace std;
int main()
{
    int x[5];
    int b;
    for (int i=0; i<5;i++)
    {
        cout << "enter the " << (i+1) <<" value: " << endl;
        cin >> x[i];//storing the values in the array
    }
    cout << "These are the values you entered" << endl;
    int i = 0;
    while (i<5)
    {
        cout << x[i] << "\t" << x[(5-1) - i] << endl;
        i++;
    }
}

