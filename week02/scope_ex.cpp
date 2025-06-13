#include <iostream>
using namespace std;

int value = 100; //global variable


int add( int x1, int x2 )
{
	cout  << x1 << endl ; //print x1 (local to add)
	return ( x1 + x2 ) ; //return x1+x2 to main()
}
namespace group1
	{
	  int value = 10 ; //define variable in namespace
    }

int main()
{

    cout << group1::value << endl ; //print 10
    cout << add( 4, 5 ) << endl  ; //print 4 from add(), print 9 from main() 
    cout << value << endl ; //print 100 (global variable)
    cout << ::value << endl ; //print 100 (explicit global) 


	return 0;
}
 
/*output: 

10
4
9
100
100*/
