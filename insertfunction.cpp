#include <string>
using namespace std;

int main() {
   string strVar;
   string newStr;
	int strPos;

   getline(cin, strVar);
   getline(cin, newStr);
	cin >> strPos;

   strVar.insert(strPos, newStr); //  insert() function inserts text into a string at the index # of strPos
   cout << strVar << endl;

   return 0;
}