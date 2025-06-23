#include <iostream>   

  using namespace std;
 
  void divide(double, double); //function declaration, takes two doubles as input

 int main()
  {
      double num1, num2; //declare double variables in main 
      cout << "Enter two numbers and I will divide the first\n";
      cout << "number by the second number: ";
      cin >> num1 >> num2; //store user inputs in num1 and num2
     divide(num1, num2); //passes copies of num1, num2 to divide (pass-by-value)
                        //inside divide, new local variables arg1 and arg2 are created
    return 0;
   }

 void divide(double arg1, double arg2) //function definition with local variables
    {
      if (arg2 == 0.0)
       {
         cout << "Sorry, I cannot divide by zero.\n";
         return;
       }
     cout << "The quotient is " << (arg1 / arg2) << endl;
  }

