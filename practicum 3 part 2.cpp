#include <iostream>
using namespace std;

int Fibonacci(int n) { // Function to calculate the nth Fibonacci number
	int first = 0; // Initialize the first Fibonacci number
	int second = 1; // Initialize the first two Fibonacci numbers
	int next; // Variable to store the next Fibonacci number
	if (n < 0) { // Check for negative input
		return -1; // Return -1 for negative input
    }
	if (n == 0) { // Check for the base case of 0
		return 0; // Return 0 for the 0th Fibonacci number
    }
	if (n == 1) { // Check for the base case of 1
		return 1; //    Return 1 for the 1st Fibonacci number
    }
	for (int i = 2; i <= n; i++) { // Loop from 2 to n to calculate the nth Fibonacci number
		next = first + second; // Calculate the next Fibonacci number
		first = second; // Update the first Fibonacci number to the second
		second = next; // Update the second Fibonacci number to the next
    }
	return next; // Return the nth Fibonacci number
}

int main() {
    int startNum;
    cin >> startNum;
	Fibonacci(startNum); // Call the Fibonacci function with the input number
	cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum); // Print the result of the Fibonacci function

    return 0;
}