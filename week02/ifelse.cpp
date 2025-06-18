#include<iostream> 
using namespace std ;

int main()
{
	int x1 = 6  ;
	if ( x1 < 10  ) //true, move to next block
	{
	  if ( x1 < 5 ) //false, move to else
	    {
	      cout << "Line A." << endl;
            }
	  else
	    {
	      cout << "Line B." << endl; //prints line B
            }
        }

return(0) ;
}

