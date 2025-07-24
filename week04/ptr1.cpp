/* What is a pointer */
#include<stdio.h>

int main()
{
	int x1 ; //int usually takes 4 bytes in memory
	int* ptr1 ; //declare a pointer to an int; ptr1 will hold the memory address of an int
		    //a pointer stores an address, regardless of its type
	x1 = 100 ;
	printf("x1 value is %d\n" , x1 );
	ptr1 = &x1 ; //assign the address of x1 to ptr1
		     // "&x1" meants "take the address of x1"
		     // ptr1 now points to the memory location of x1
	printf("%p \n" , ptr1 );// prints the address stored in ptr1 (should be the address of  x1)
	*ptr1 = 200 ; //"*ptr1" dereferences the pointer
			// it accesses the value at the address ptr1 points to 
			// this sets the value at that address (i.e. x1) to 200
	printf("x1 value is %d\n" , x1 ); //should print: x1 value is 200
	//A pointer has to be of some type. 
	//If we increment by 1, the pointer address moves forward by the size of its type (4 bytes for int)
	ptr1 = ptr1 + 1 ;
	printf("%p\n" , ptr1 ); // prints a new address, 4 bytes past x1


	//Not a legal memory location
	ptr1 = ptr1 + 1 ; //the pointer address is again incremented by 4, it's now 8 bytes past x1
	*ptr1 = 300 ; //This writes the value 300 to that memory location. 
		     // ptr1 no longer points to valid/allocated memory that belongs to the program.  May cause crash.
}
