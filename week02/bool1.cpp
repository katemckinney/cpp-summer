#include<iostream> 
using namespace std ;
int main()
{
        bool b1; //declare and define bool var
        cout << boolalpha << endl; // enable printing of "true" or "false"
        b1 = true ; //assign to b1 the value true
        cout << b1 << endl  ; //print true
        b1 = false ; //assign to b1 the value false
        cout << b1 << endl  ; //print false
        b1 = 10  ; //assign b1 a nonzero value (implicitly true)
        cout << b1 << endl  ; //print true
        b1 = 0  ; //assign b1 zero (implicitly false)
        cout << b1 << endl  ; //print false
        return(0)  ;
}
