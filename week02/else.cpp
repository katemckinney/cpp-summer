#include<iostream> 
using namespace std;

int main()
{
 int testScore ;
 cout << "Enter your test score and I will tell you\n";
 cout << "the letter grade you earned: ";
 cin >> testScore;
 if (testScore < 60)
   cout << "Your grade is F.\n";
 else if (testScore < 70)
   cout << "Your grade is D.\n";
 else if (testScore < 80)
   cout << "Your grade is C.\n";
 else if (testScore < 90)
   cout << "Your grade is B.\n";
 else if (testScore <= 100)
   cout << "Your grade is A.\n";
 else   cout << "That is not a valid score.\n"; //final else catches conditions not satisfied by any of the if statements

 return 0;
}
