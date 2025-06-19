#include <iostream>
using namespace std;
int main()
{
    int  number = 0   ;
    cout << "Enter a number between 1 to 10." ;
    cin >> number ;
    for( int i1=0 ; i1 < number ; i1++ ) // (initialization; test; update)
     {
         cout << "Hello" << endl  ;
     }

     return 0 ;
}

/*
The initialization (int i1 = 0) runs once at the start.
The loop continues while the test condition (i1 < number) is true, 
executing the body and then updating i1++. 
Once the condition is false, the loop exits.
*/
