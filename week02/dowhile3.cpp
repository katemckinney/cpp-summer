#include <iostream>
using namespace std;

int main()
{
//loop counter "count": initialized before loop, updated inside loop, and used in loop condition 
  int count = 0, number = 0, limit = 4; 

 do
 {
    number += 2; //Shorthand for number = number + 2 
    count++;
 } while (count < limit); //When true, repeat do. When false, exit loop. 

 cout << "number:" << number << " count:" << count << endl;


} 
//unconditional do: number is 2, count is 1. while condition is true.
// first do loop: number is 4, count is 2, while condition is true.
//second do loop: number is 6, count is 3, while condition is true.
// third do loop: number is 8, count is 4, while condition is false. Exits loop. 
//prints number: 8 count: 4
