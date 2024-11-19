#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    vector<string> Names(5);
    vector<vector<double>> Grades(5, vector<double>(5));

    for (int i = 0; i < 5; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        getline(cin, Names[i]);

        for (int j = 0; j < 5; j++) {
            cout << "Enter grade " << (j + 1) << " for " << Names[i] << ": ";
            cin >> Grades[i][j];
        }
        cin.ignore();
    }

    cout << fixed; 
    cout << setprecision(2); 
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << Names[i] << ": ";
        double total = 0;

        for (int j = 0; j < 5; j++) {
            cout << Grades[i][j] << " ";
            total += Grades[i][j];
        }
        double average = total / 5;
        cout << "| Average: " << average << endl;
    }
    return 0;
}
