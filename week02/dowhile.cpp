#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    //This block runs once, then loops as long as while condition is true.
    do
    {
      cout << "Enter a value in the range 1-100:"; 
      cin >> number; 
    }

    while (number < 1 || number > 100);

    //Once input is valid (condition is false), exit loop, execute next line of code.
    cout << "The number entered was:" << number << endl;
 return 0 ;  

}

