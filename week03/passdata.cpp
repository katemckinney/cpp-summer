#include <iostream>

using namespace std;

void changeme(int x1)
{
    x1 = 100; // modifies the local copy x1; does not affect i1 in main
}

int main()
{
    int i1 = 10; // initializes i1 = 10 in main
    changeme(i1); // passes a copy of i1 (which is 10) to changeme()
                  // inside changeme(), x1 = 10 defined
    cout << "i1:" << i1 << endl; // prints i1: 10 (because i1 is unchanged in main)
    return 1;
}

/* NOTES FROM PROFESSOR MITTAL:
We call the function "changeme" and pass the "i1" but we don't pass the variable
and instead pass in the value which is 10. This value is passed to the variable "x1"
in the function "changeme".
We are in the function "changeme" and the variable "x1" is defined at this point and set to 10.
The function "changeme" ends and the variable "x1" is out of scope.
When we come back to the main function nothing has happened to the variable "i1"
and the value of i1 is still 10 as shown in the output.*/
