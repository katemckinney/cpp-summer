 #include <iostream>
 #include <iomanip>

 using namespace std;

//WRITE A function isPrime that takes a single integer and returns boolean

//Write a function  toPower that takes 2 integer named base and power
//and returns the result.

bool isPrime(int t)        //function definition, takes integer as input, returns bool
{
	if (t<=1)
	return false; 

	for( int i1 = 2 ; i1 < t ; i1++)
	{if (t % i1 == 0)
		return false;
	}
	return true;
}

int toPower(int base, int power)     //function definition
{
	int result = 1;
	for (int i=0; i < power ; i++)
		{
          	result = result*base; // = is an assigment
		}
	return result;
}

int main()
{
      cout << boolalpha; // Enable boolalpha flag
      cout << "Is 7 prime: " << isPrime( 7 ) << endl ;
      cout << "Is 14 prime: " << isPrime( 14 ) << endl ;
      cout << "2 to the power 3: " << toPower(2,  3) << endl ; //passes copies to base and power integers (pass by value)
      cout << "2 to the power 0: " << toPower(2,  0) << endl ;
}
