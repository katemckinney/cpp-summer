#include <iostream>

using namespace std ;

namespace outer1
{
   namespace inner1
    {
		int var1 = 100 ;
	}

}

using namespace outer1::inner1;

int main()
{

   cout << var1 << endl ;
   return 0 ;
}
