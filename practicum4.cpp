#include <iostream>
#include <vector> 
using namespace std;

/* Define your functions here */
void GetUserValues(vector<int>& userValues, int numValues) { //
    int i;
    for (i = 0; i < numValues; i++) {
        cin >> userValues.at(i);
    }
}
void IntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold, vector<int>& resValues) { //   
    for (unsigned int i = 0; i < userValues.size(); i++) {
        if (userValues.at(i) <= upperThreshold) {
            resValues.push_back(userValues.at(i));

        }
    }
}
int main() {
    vector<int> userValues;
    vector<int> resValues;
    int upperThreshold;
    int numValues;
    unsigned int i;

    cin >> numValues;
    userValues.resize(numValues);
    GetUserValues(userValues, numValues);

    cin >> upperThreshold;
    IntsLessThanOrEqualToThreshold(userValues, upperThreshold, resValues);
    for (i = 0; i < resValues.size(); ++i) {
        cout << resValues.at(i) << " ";
    }

    return 0;
}
