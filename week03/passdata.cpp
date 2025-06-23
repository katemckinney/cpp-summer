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
                  // inside changeme(), x1 = 10 is created and modified locally
    cout << "i1:" << i1 << endl; // prints i1: 10 (because i1 is unchanged in main)
    return 1;
}
