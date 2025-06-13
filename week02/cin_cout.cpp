#include <iostream>
using namespace std ;

int main()
{
	int num1 ; //declare integer variable
	int num2 ;
	cout << "Enter the first integer:"  ;
	cin >> num1 ;
	cout << "Enter the second integer:"  ;
	cin >> num2 ;
	cout << "The sum of "<< num1 <<" and "<< num2 <<"is:"<<(num1+num2)
<< endl ;
	return 0 ;

}

/*no need to define a separate sum variable.+ has higher precedence than << and is a built-in operator, not from the standard library */
