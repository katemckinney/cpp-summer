#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 5;
    int z;

    z = x++ + ++y;  // y becomes 6 before use; x is used as 5, then becomes 6 → z = 11
    cout << "z = " << z << endl;  // prints z = 11

    z = x++ + y++;  // x is 6, y is 6 → z = 12; then x = 7, y = 7
    cout << "z = " << z << endl;  // prints z = 12

    z = x + y;
    cout << "z = " << z << endl;  // prints z = 14

    if (z++ == 14)  // condition true; then z becomes 15
        z++;        // executes → z = 16

    ++z;  // z = 17
    cout << "z = " << z << endl;  // prints z = 17

    return 0;
}
