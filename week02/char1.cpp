#include<iostream> 
using namespace std;

int main()
{
    char ch; // Store user input character as ASCII (1 byte)

    cout << "Enter a digit or a letter: ";
    ch = cin.get(); // Read a single character (including whitespace)

    if (ch >= '0' && ch <= '9') { // Check if input is a digit (ASCII '0' to '9')
        cout << "You entered a digit.\n";
    }

    return 0;
}
