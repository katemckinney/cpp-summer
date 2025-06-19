#include <iostream>
using namespace std;

int main()
{
  int count = 10;
  //Runs block once unconditionally.  
  do
  {
    cout << "Hello World\n";
    count++; //count=11
  } 

  //While condition is false, exit loop. "Hello World" is printed once unconditionally.
  while (count < 1);  

return 0;  
}

