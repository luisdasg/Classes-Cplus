#include <iostream>
#include <string>
using namespace std;

int main() {
   string stringVar;
   int beginIndex;
	int substrLen;

   getline(cin, stringVar);
   cin >> beginIndex;
	cin >> substrLen;
   cout << stringVar.substr(beginIndex, substrLen) << endl; // substrLen function is used to get a substring of a string
   return 0;
}