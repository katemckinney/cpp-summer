#include <stdio.h>
#include <iostream>
using namespace std ;

// Function 1 takes 10 separate integer inputs (grades) as arguments.
// It calculates the total sum of the grades and returns the average as a double.
double average(  int grade_student1 ,
int  grade_student2  , int  grade_student3 , int  grade_student4 ,
int  grade_student5 ,   int grade_student6  ,  int  grade_student7  ,
int  grade_student8  , int  grade_student9 , int  grade_student10  )
{
    double total = 0 ;
    total =    grade_student1 +
    grade_student2  +  grade_student3 +  grade_student4 + grade_student5 +
    grade_student6  +   grade_student7  + grade_student8  +  grade_student9 +
    grade_student10  ;
    return ( total / 10.0 )   ;
}

// Function 2 receives an integer array as input (the array is defined in main()).
double averageArray( int array1[]   )
{
 double total = 0   ;
 for( int i1=0 ; i1<10  ; i1++ )
  {
      total = total +  array1[i1]   ;
  }
 return ( total / 10.0 ) ;
}

int main()
{   //Function 1 
    int  grade_student1= 10 , grade_student2= 20 , grade_student3= 30 ,
    grade_student4 = 40 , grade_student5= 50 ,   grade_student6= 60 ,
    grade_student7= 70 , grade_student8=80,  grade_student9=90 , grade_student10 =100 ;
    cout << "Average is : " << average(  grade_student1 ,
    grade_student2  ,  grade_student3 ,  grade_student4 ,
    grade_student5 ,   grade_student6  ,   grade_student7  ,
    grade_student8  ,  grade_student9 , grade_student10  )  << endl ;
    //Function 2
    int studentGrades[] = { 10 , 20 , 30 , 40 , 50 , 60 , 70,  80 , 90, 100 }  ;
    cout << "Average is : " << averageArray( studentGrades )   << endl ;

}
