#include <iostream>
using namespace std ;

void computeLongestSequence( int arrayOfNumbers[] ,int size )
{
  int count=1;
  int maxCount=1;
  int longestNumber = arrayOfNumbers[0];
  for (int i1=0; i1<size-1; i1++)
	{
	  if (arrayOfNumbers[i1] == arrayOfNumbers[i1+1])
            {
	      count = count+1;
	      if (count> maxCount)
	        {
	         maxCount=count;
	         longestNumber = arrayOfNumbers[i1];
 	         }
             }
           else
	   count = 1;
	 }

cout << "Longest repeating number is:" << longestNumber << "with count:" << maxCount << endl;
}

int main()
{
    /*
  int arr5[] = {1 , 2 , 3, 3 };
  computeLongestSequence( arr5 , 4 ) ;
  exit(0);
   */
  const int SIZE=10 ;

  int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;
  int arr2[10] = { 1, 2, 3, 3, 3, 3, 7, 7, 9, 10 } ;
  int arr3[10] = { 2, 2, 3, 4, 5, 6, 3, 3, 3, 3 } ;
  int arr4[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 } ;



  computeLongestSequence( arr1 , SIZE ) ;
  computeLongestSequence( arr2 , SIZE ) ;
  computeLongestSequence( arr3 , SIZE ) ;
  computeLongestSequence( arr4 , SIZE ) ;

}
