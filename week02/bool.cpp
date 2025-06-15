#include<iostream>
using namespace std ;

int main()
{
        bool b1, b2 ; // declare boolean variables
        int x = 5, y = 10; // declare and initialize integer variables
        b1 = x < y; // assign to b1 the result of evaluating "x < y" (true)
        b2 = y == x; // assign to b2 the result of evaluating "y == x" (false)
        cout << "b1 is " << b1 << endl; // prints 1 (true)
        cout << "b2 is " << b2 << endl; // prints 0 (false)
        // Use boolalpha to print "true" or "false" instead of 1 or 0
        cout << boolalpha << "b1 is " << b1 << endl;
        cout << "b2 is " << b2 << endl;
        bool b3; b3 = 10; // assign 10 to b3, implicitly true (nonzero)
        cout << b3 << endl ; // prints 1 (true)
        return(0);
}
