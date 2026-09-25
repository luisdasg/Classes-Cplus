#include <string>
#include <iostream>
#include <iomanip>   // needed for fixed and setprecision
#include <fstream>   // needed for ifstream (reading) and ofstream (writing)
#include <vector>
using namespace std;

// A helper function that takes an average score and returns the
// corresponding letter grade. It lives OUTSIDE main() so main() can
// just call it like a tool, instead of repeating this logic inline.
char letterGrade(double avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';      // only reached if avg < 90
    else if (avg >= 70) return 'C';      // only reached if avg < 80
    else if (avg >= 60) return 'D';      // only reached if avg < 70
    else return 'F';                     // avg < 60
}

int main() {

    // --- Step 1: Ask the user for the file name ---
    cout << "Enter file name: " << endl;
    string filename;
    cin >> filename;
    ifstream inputFile(filename);   // open the tsv file for reading

    // --- Step 2: Prepare storage for student data ---
    // We use vectors (resizable arrays) because we don't know in advance
    // how many students are in the file (could be 1 to 20).
    // These are "parallel vectors": index i across all of them
    // describes the same student.
    vector<string> lastNames, firstNames;
    vector<int> mid1, mid2, finalScores;

    // --- Step 3: Read the file line by line (student by student) ---
    // inputFile >> last >> first >> m1 >> m2 >> fin reads 5 space/tab
    // separated values at a time. The >> operator automatically skips
    // over whitespace (spaces AND tabs), so we don't need to manually
    // split on '\t'.
    //
    // The while condition works because inputFile itself is returned
    // by >>, and a stream converts to "false" once reading fails
    // (e.g. end of file reached). So the loop stops automatically
    // after the last student is read.
    string last, first;
    int m1, m2, fin;
    while (inputFile >> last >> first >> m1 >> m2 >> fin) {
        lastNames.push_back(last);     // add this student's data onto
        firstNames.push_back(first);   // the end of each vector
        mid1.push_back(m1);
        mid2.push_back(m2);
        finalScores.push_back(fin);
    }

    // --- Step 4: Open the output file we'll write results to ---
    ofstream report("report.txt");

    // Variables to accumulate the total of each exam, used later to
    // compute the class-wide averages.
    double sum1 = 0, sum2 = 0, sumFinal = 0;
    int n = lastNames.size();   // total number of students read

    // --- Step 5: Process each student: compute grade, write row, accumulate sums ---
    for (int i = 0; i < n; ++i) {
        // average of that ONE student's 3 exam scores
        double avg = (mid1[i] + mid2[i] + finalScores[i]) / 3.0;
        char grade = letterGrade(avg);   // convert average to a letter grade

        // Write one row: name, scores, and grade, each separated by a tab,
        // matching the required output format.
        report << lastNames[i] << '\t' << firstNames[i] << '\t'
            << mid1[i] << '\t' << mid2[i] << '\t' << finalScores[i]
            << '\t' << grade << '\n';

        // Add this student's scores into the running totals for
        // each exam (used after the loop to compute class averages).
        sum1 += mid1[i];
        sum2 += mid2[i];
        sumFinal += finalScores[i];
    }

    // --- Step 6: Write the exam averages at the end of the file ---
    report << '\n';   // blank line separating student rows from the averages line

    // fixed + setprecision(2) forces exactly 2 digits after the decimal
    // point (e.g. 83.4 becomes "83.40") to match the required format.
    report << "Averages: midterm1 " << fixed << setprecision(2) << sum1 / n
        << ", midterm2 " << sum2 / n
        << ", final " << sumFinal / n << '\n';

    return 0;
}