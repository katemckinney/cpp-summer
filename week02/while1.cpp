#include <iostream>
using namespace std;

int main() 
{ 
        int x1, number = 0   ;
         cout << "Enter a number between 1 to 10." ;    
         cin >> x1 ;  
          while (number < x1 ) ;//Always true, semicolon here creates infinite loop 
           {               
                       cout << "Hello\n"; //this block is never reached
                       number++; 
           }  
       return 0 ;  
}
