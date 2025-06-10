#include <iostream>
using namespace std;

namespace package
{
int var1 = 100 ;
}

int sum( int x1, int x2 ); //function declaration
int sub( int x1, int x2 ); //function declaration

int main()
{
int x1 = 5 ;
int x2 = 2 ;
cout << sum( x1, x2 ) << endl ;
cout << sub( x1, x2 ) << endl ;
cout << package::var1 << endl ; //explicitly calling namespace
}
int sum( int x1, int x2 ) //function definition
{
return x1+x2 ;
}
int sub( int x1, int x2 ) //function definition
{
return x1-x2 ;
}

