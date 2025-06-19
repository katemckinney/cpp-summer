#include <iostream>
using namespace std;

int main()
{
    int  number = 0   ; 
    cout << "Enter a number between 1 to 10." ;
    cin >> number ;
    for(  ;  number > 0  ;  number-- )//No separate loop counter; number is decremented each time  
    {
        cout << "Hello" << endl  ;
    }
    return 0 ;
}
