#include <iostream>
using namespace std;

int main()
{
     int  number = 0   ;
     cout << "Enter a number in the range 1-100: ";
     cin >> number;

     while (number < 1 || number > 100) //If T, block runs. if F, skips block. 
       {
          cout << "ERROR: Enter a value in the range 1-100: ";
         cin >> number; //Loops back to while condition until it returns F
      }
     cout << "The number entered was:" << number << endl ;
     return 0 ;

 }

// Input validation loop:
// The loop runs as long as the input is invalid (i.e., < 1 or > 100).
// User is repeatedly prompted until a valid number in the range [1, 100] is entered.
// Once a valid number is entered, the loop exits and the program continues.
