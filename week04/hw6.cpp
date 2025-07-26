#include <iostream>
#include <string>
using namespace std;

class Person
{
    private: //members below can only be accessed within class methods
        int id; //holds the person's ID 
        string firstName;
        string lastName;
      //TO DO
      //Write a constructor that takes 3 arguments an int id, a string
      //that is first name and a string that is last name
      //It assigns those arguments to the class variables
      //It also prints out a statement as shown in the output.
    public: //members below can be accessed outside the class (e.g from main)
        Person(int idParameter, string firstParameter, string lastParameter)
        {
            id = idParameter; //Sets the id to the passed in value (idParameter)
            firstName = firstParameter;
            lastName = lastParameter;
            cout << "Person Constructor for Id:" << id
             << " First Name: " << firstName
             << " Last Name: " << lastName << endl;
	}
        // Copy constructor creates a new object based on another
        Person(const Person& object1)
        {
            id = object1.id + 1; //increment ID
            firstName = object1.firstName;
            lastName = object1.lastName;
	cout << "Person Copy Constructor." << endl;
	}

// Print Function
    void print()
    {
        cout << "Id:" << id
             << " First Name: " << firstName
             << " Last Name: " << lastName << endl;
    }

   //Destructor   
   ~Person()
    {
        cout << "Person Destructor for Id:" << id
             << " First Name: " << firstName
             << " Last Name: " << lastName << endl;
    }
     };

int main()
{
  //DO NOT MODIFY THIS CODE
  Person  personObject1( 1, "Sonny", "Liston" ) ;
  Person* personPtr1 = new Person( 2, "Joe", "Frazier"  ) ;

  Person  personObject2 = personObject1  ;
  personObject1.print() ;
  personObject2.print() ;
  delete personPtr1 ;
  return 0 ;
}
