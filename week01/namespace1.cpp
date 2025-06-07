#include <iostream>
using namespace std;

// Global variable
int var1 = 100;

int main() {
    // Local variable shadows (hides) the global one
    	int var1 = 25;
	cout << var1 << endl;  // Output: 5
}
