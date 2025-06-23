#include <stdio.h>

int main()
{
     printf ( "%10s %10s\n" , "Number" , "Square" ) ;
     for( int i1=1 ; i1 <=5 ; i1++ )
     {
          printf( "%10d %10d\n" , i1 , i1*i1 ) ;
      }

    printf ( "%-10s %-10s\n" , "Number" , "Square of a number" ) ;
    for( int i1=1 ; i1 <=5 ; i1++ )
     {
       printf( "%-10d %-10d\n" , i1 , i1*i1 ) ;
     }
     return ( 1) ;
}
