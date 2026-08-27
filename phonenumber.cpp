#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;

   cin >> phoneNumber;
   int areacode = phoneNumber / 10000000; // "/" operator is used to get the area code by dividing the phone number by 10 million
   int middlethree = (phoneNumber / 10000) % 1000; // "/" operator is used to get the middle three digits by dividing the phone number by 10 thousand and then taking the remainder when divided by 1000
   int lastfour = phoneNumber % 10000; // "%" operator is used to get the last four digits by taking the remainder when the phone number is divided by 10 thousand
   cout << "(" << areacode << ") " << middlethree << "-" << lastfour << endl;
   return 0;
}