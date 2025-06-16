#include<iostream> 

using namespace std ;

int main()
{

 int x1 = 5, y1 = 7 ; //declare and initialize integer variables
 if ( x1 == y1 ) //evaluates to true if operands are equal
   cout << "x1 and y1 are equal." << endl; //prints if true. Best practice to block.
   cout << "Another statement." << endl; //prints regardless, only first line after if is assoc with conditional
 return(0) ;

}
