#include <iostream>

using namespace std ;

namespace outer1
{
   namespace inner1
    {
		int var1 = 100 ;
	}

}



int main()
{

   cout << outer1::inner1::var1 << endl ;
   return 0 ;
}



