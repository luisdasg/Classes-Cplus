#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string students[5];
    double grades[5][5];

    
    for (int i = 0; i < 5; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, students[i]);
        cout << "Enter 5 grades for " << students[i] << ":\n";
        for (int j = 0; j < 5; j++) {
            cout << "Grade " << j + 1 << ": ";
            cin >> grades[i][j];
        }
        cin.ignore();
    }

    
    cout << fixed << setprecision(2); 
    cout << "\nStudent Grades and Averages:\n";

    
    cout << setw(20) << left << "Student Name";
    for (int j = 0; j < 5; j++) {
        cout << setw(10) << "Grade " << j + 1;
    }
    cout << setw(12) << "Average\n";

    
    for (int i = 0; i < 5; i++) {
        cout << setw(20) << left << students[i];
        double total = 0;
        for (int j = 0; j < 5; j++) {
            cout << setw(10) << grades[i][j];
            total += grades[i][j];
        }
        double average = total / 5;
        cout << setw(12) << average << endl;
    }

    return 0;
}
