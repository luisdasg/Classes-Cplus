#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
	// Create a VendingMachine object; its constructor sets inventory to 20.
	VendingMachine machine;

	// buy, update inventory, restock, update inventory, 
	// buy again, update inventory   

	// Variables to hold user input:
	// b  = amount purchased (1st purchase)
	// r  = amount restocked
	// ba = amount purchased (2nd purchase, "buy again")
	int b;
	int r;
	int ba;

	// Read all three values from the user in one line (space-separated)
	cin >> b >> r >> ba;

	machine.Purchase(b);    // First purchase: reduces inventory by b
	machine.Restock(r);     // Restock: increases inventory by r
	machine.Purchase(ba);   // Second purchase: reduces inventory by ba

	machine.Report();       // Print the final inventory count

	return 0;
}