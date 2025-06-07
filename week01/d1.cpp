#include <iostream>
using namespace std ;

int sum( int x1, int x2 )
{ 	
  return x1+x2 ;
}

int main()
{ 
   cout << sum( 2, 3 )  << endl ;
}

//doesnt work bc main is called before declaration 

#include <iostream>
using namespace std ;

int main()
{
   cout << sum( 2, 3 )  << endl ;

}

int sum( int x1, int x2 )
{
	return x1+x2 ;
}

//trying to fix

#include <iostream>
using namespace std ;

int sum( int x1, int x2 );

int main()
{
   cout << sum( 2, 3 )  << endl ;

}
int sum( int x1, int x2 )
{
        return x1+x2 ;
}


