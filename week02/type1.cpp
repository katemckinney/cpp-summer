#include <iostream>
using namespace std ;

int main()
{
	char ch1 ;
	int x1 ;
	x1 = 1.9f  ;
	cout << "x1:" << x1 << endl ;
	ch1 = x1 ;
	//The cast is necessary otherwise a character is printed
	//out .
	cout << "ch1:" << (int)ch1 << endl ;
	x1 = 2500 ;
	ch1 = x1 ;
	cout << "ch1:" << (int)ch1 << endl ;
	return  0  ;
}

/*The least significant byte of 2500 (1001 1100 0100 -> 1100 0100) corresponds to unsigned char 196 (2500 mod256), or char -60.

Size of char : 1 byte
Size of int : 4 bytes
Size of short int : 2 bytes
Size of long int : 8 bytes
Size of signed long int : 8 bytes
Size of unsigned long int : 8 bytes
Size of float : 4 bytes
Size of double : 8 bytes
Size of wchar_t : 4 bytes*/
