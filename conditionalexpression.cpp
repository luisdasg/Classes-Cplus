#include <iostream>
using namespace std;

int main() {
   int numUsers;
   int updateDirection;

   cin >> numUsers;
   cin >> updateDirection;
   numUsers = (updateDirection > 0) ? (numUsers + 1) : (numUsers - 1); // (condition) ? if true : if false;

   cout << "New value is: " << numUsers << endl;

   return 0;
}