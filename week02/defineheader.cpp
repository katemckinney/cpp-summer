#include <iostream>
#include "defineheader.h"
using namespace std;

//Replace instance at preprocessor time.
#define X1 30 // Unlike const, macros have no type or scope
const int Y = 10;//const: typed, scoped constant (part of compiled program)

void function1()
{
   cout << "Value of X1:  "<< X1 << endl ;
}

int main()
{
  const int Z = 30 ;
function1();
cout << "Value of X:  "<< X << endl ;
  cout << "Value of Y:  "<< Y << endl ;
  cout << "Value of Z:  " << Z << endl ;
  return 0;

}

//fixed errors in code to demonstrate macro directive (preprocessor) vs local and global vars in program
