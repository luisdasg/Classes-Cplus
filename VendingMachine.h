#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

// Represents a simple vending machine that tracks how many
// bottles it has in stock.
class VendingMachine {
public:
    VendingMachine();              // Constructor: sets starting inventory

    void Purchase(int amount);     // Removes 'amount' bottles (a sale)
    void Restock(int amount);      // Adds 'amount' bottles (restocking)
    int GetInventory();            // Returns the current bottle count
    void Report();                 // Prints the current inventory to the console

private:
    int bottles;                   // Current number of bottles in stock
};

#endif