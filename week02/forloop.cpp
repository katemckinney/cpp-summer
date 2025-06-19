#include <iostream>
using namespace std;
int main()
{
    int  number = 0   ; //initializes variable to store user input
    cout << "Enter a number between 1 to 10." ;
    cin >> number ;
    // (initialization of loop counter; test condition; update) 
    for( int i1=0 ; i1 < number ; i1++ )
     {
         cout << "Hello" << endl  ;
     }

     return 0 ;
}

/*
In the for loop, the  initialization (int i1 = 0) runs once at the start.
The loop continues while the test condition (i1 < number) is true, 
executing the body and then updating i1++. 
Once the condition is false, the loop exits.
*/
