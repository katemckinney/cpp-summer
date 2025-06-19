#include <iostream>
using namespace std;

int main()
{
    int x1, number = 0;  // x1: user input; number: loop counter initialized to 0

    cout << "Enter a number between 1 to 10: ";
    cin >> x1;

    // Loop runs while number is less than x1
    while (number < x1)
    {
        cout << "Hello\n";   // Print "Hello"
        number++;            // Increment counter by 1
    }

    // Example: if x1 = 2 → number = 0 → Hello
    // then number = 1 → Hello → number = 2 → loop ends

    return 0;
}
