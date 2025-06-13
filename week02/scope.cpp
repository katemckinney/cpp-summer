#include <iostream>
using namespace std;

int value = 100;

int main()
{
	int value = 10 ;
	//Scope of this is till end of the function
	cout << value << endl ; // first print 10 
	{
		int value = 20 ;
		cout << value << endl ; // 20 
		{
			int value = 30 ;
			cout << value << endl ; //30 
		}
		cout << value << endl ; // 20 
	} 
	cout << value << endl ; // 10
	cout << ::value << endl ; // Print global var 100 
	return 0;
}


