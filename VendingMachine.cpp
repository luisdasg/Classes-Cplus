#include <iostream>
#include <string>

#include "VendingMachine.h"
using namespace std;

// Constructor: every new VendingMachine starts stocked with 20 bottles.
VendingMachine::VendingMachine() {
	bottles = 20;
}

// Simulates a purchase by removing 'amount' bottles from inventory.
// Note: this doesn't check whether 'amount' exceeds current stock,
// so inventory could go negative if more is purchased than is in stock.
void VendingMachine::Purchase(int amount) {
	bottles = bottles - amount;
}

// Returns the current number of bottles in stock.
int VendingMachine::GetInventory() {
	return bottles;
}

// Adds 'amount' bottles back into inventory (e.g. when restocked).
void VendingMachine::Restock(int amount) {
	bottles = bottles + amount;
}

// Prints the current inventory count in a readable format.
void VendingMachine::Report() {
	cout << "Inventory: " << bottles << " bottles" << endl;
}