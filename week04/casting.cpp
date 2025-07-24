#include<stdio.h>
#include <iostream>

using namespace std ;

int main(void)
{
        int x1 = 100 ;//Assign integer value 100 to x1
        char ch1 = 'a' ; //Assign char value 'a' (ASCII code 97)

        ch1 = (char) x1 ; //Explicitly cast 100 (int) to char. ASCII 100 is 'd' so  ch1= 'd'
        x1 = ch1 ; //Implicitly cast 'd' (char) to int. ASCII 'd' is 100, so x1=100

        cout << "ch1" << ch1 << endl  ; //Prints: ch1d
        cout << "x1" << x1 << endl  ; //Prints: x1100

        return 0;

}


