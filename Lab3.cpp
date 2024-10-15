#include "Student.h"

int main()
{
    string n;
    int grades = 10;
    double tg;
    cout << "Enter the name of the student\n";
    getline(cin, n);
    Student luis(n);
    for (int i = 1; i <= grades; i++)
    {
        cout << "Please enter the " << i << " grade: " << endl;
        cin >> tg;
        luis.AddGrade(tg);
    }
    cout << "Welcome " << n << " this is your student portal.\n";
    cout << "Your average grade for this class is "<< luis.CalcAverage() << endl;
    cout << "Your grade will be an " << luis.getLetterGrade(luis.CalcAverage()) << endl;
}
