#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
//Program to convert from Celsius to Fahrenheit

void writeToConsoleAndFileCStyle( int start , int end ) //function
{
  FILE* cfPtr ; //Declare a file pointer
  cfPtr = fopen( "data1.txt", "w"); //Open data1.txt for writing
  fprintf(cfPtr, "%15s %15s\n", "Celsius" , "Fahrenheit" ) ; //print to data1.txt
  printf ("%15s %15s\n", "Celsius" , "Fahrenheit" ); //print to console

  for( int i=start ; i <=end ; i++ ) 
     {
	  fprintf(cfPtr, "%10d %15.2f\n" , i , i*1.8+32 );
          printf( "%10d %15.2f\n" , i , i*1.8+32 ) ;
      }
}

void writeToConsoleAndFileCPlusPlusStyle( int start , int end )
{
    ofstream outputFile("data2.txt", ofstream::app) ;
    outputFile << setw(15) << "Celsius" << setw(15) << "Fahrenheit" << endl;
    cout <<  setw(15) << "Celsius" << setw(15) << "Fahrenheit" << endl ;

    
    for( int i=start ; i <=end ; i++ ) 
     {    float F=i*1.8+32;
          outputFile << setw(10) << i << setw(15) <<std::fixed << std::setprecision(2) << F << endl;
          cout << setw(10) << i << setw(15) << std::fixed << std::setprecision(2) << F << endl;
      }
}

int main()
{
  int start ;
  int end ;
  cout << "Enter the start of range:" ;
  cin >> start ;
  cout << "Enter the end of range:" ;
  cin >> end ;
  writeToConsoleAndFileCStyle( start , end ) ;
  writeToConsoleAndFileCPlusPlusStyle( start , end ) ;

return 0;
}

