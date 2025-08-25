#include <iostream>
using namespace std;

// TODO: Download Fira Code or Operator Mono font for ligatures

// We allocated memory dianamically here in the pointer.cpp

/*
	What is pointer?
-> It is a variable that stores the memory  address of another variable instead of storing the value directly
*/

class student
{
public:
	string name;
	int age, rollNO;
	string marks;
};
int main()
{
	student *s1 = new student;
	(*s1).name = "idk";
	(*s1).age = 99;
	(*s1).rollNO = 1;
	(*s1).marks = "B+";

	cout << s1->name << "\n" // instead of \n we can just use the space in the quote
		  << s1->age << "\n"
		  << s1->rollNO << "\n"
		  << s1->marks;

	return 0;
}