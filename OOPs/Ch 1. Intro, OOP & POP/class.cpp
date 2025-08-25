#include <iostream>
using namespace std;

// Blueprint
class student // Class - It is a user-defined data type that acts like a blueprint for creating objects
// I'll add functions later in the class (btw using a user-defined funcitons is a good practice rather than declaring stuff in main function)
{
public: // REMEBER:- By deafult its "private:"
	string name;
	int age, rollNO;
	string marks;
};

// Actual object
int main()
{
	// Object - It is a real-world instance created from that class
	student s1; // Here s1 is a object
	// now the object is calling the variables
	s1.name = "idk";
	s1.age = 10;
	s1.rollNO = 10;
	s1.marks = "A-";
	// Printing the shit here in the cout
	cout << s1.name << "\n"
		  << s1.age << "\n"
		  << s1.rollNO << "\n"
		  << s1.marks << "\n"
		  << "----------" << "\n";

	// For more than 1 student we have created 2nd object

	student s2; // Here s2 is a object
	s2.name = "ik";
	s2.age = 100;
	s2.rollNO = 100;
	s2.marks = "A+";

	cout << s2.name << "\n"
		  << s2.age << "\n"
		  << s2.rollNO << "\n"
		  << s2.marks << "\n";

	// cin >> name>>age>>rollNO>>marks;

	return 0;
}