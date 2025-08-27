#include <iostream>
using namespace std;

/*
Destructor :-
	- It is a special member function that is automatically called when an object goes out of scope or is explicitly deleted
	- It has the same name as the class but is prefixed with a tilde (~) and is used to release resources, such as memory, that the object may have acquired during its lifetime
*/

class userrr
{
	string name;
	int *data;

public:
	userrr(string name)
	{
		this->name = name;
		cout << "constructor is " << name << endl;
	}
	// Deconstructor Prints in revrese order
	// Reason need to find its todo I'll do it later
	~userrr()
	{
		cout << "destructor is " << name << endl;
	}
};

int main()
{
	userrr i1("1"), i2("2"), i3("3");

	return 0;
}