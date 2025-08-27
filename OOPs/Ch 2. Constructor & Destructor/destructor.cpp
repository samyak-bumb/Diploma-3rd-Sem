#include <iostream>
using namespace std;

/*
Destructor :-
	- It is a special member function that is automatically called when an object goes out of scope or is explicitly deleted
	- It has the same name as the class but is prefixed with a tilde (~) and is used to release resources, such as memory, that the object may have acquired during its lifetime
*/

class userr
{
	string name;
	int *data;

public:
	userr()
	{
		name = "idk";
		data = new int; // Dynamic Memory
		*data = 69;
		cout << "constructor is called here" << endl;
	}
	//  Destructor is called here
	~userr()
	{
		cout << "destructor is called here" << endl;
	}
};

int main()
{
	userr i1;

	return 0;
}