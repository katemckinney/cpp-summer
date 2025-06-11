#include <iostream>
#include <limits.h>
using namespace std;


int main()
{
   char ch1 ;

   cout << "Min value of char is:" << CHAR_MIN << endl ;
   cout << "Max value of char is:" << CHAR_MAX << endl ;

   return 0 ;
}

/*In 8 bits, values range from 0000 0000 to 1111 1111, or 0 to 255 in unsigned characters. 
To convert these to signed characters, the values are split based on the most significant bit (MSB). 
When MSB = 0, the values remain unchanged from their unsigned interpretation; for example, 0000 0000 = 0 and 0111 1111 = 127. When MSB = 1,
 the values are interpreted using two’s complement. Thus, 1000 0000 = -128 and 1111 1111 = -1.*/
