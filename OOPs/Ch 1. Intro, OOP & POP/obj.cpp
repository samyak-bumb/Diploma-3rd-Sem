#include <iostream>
using namespace std;

// IMP: Empty class no. is always 1

/* 
	Reason :-
- Since in C++, every object must have a unique address in memory
- If the size of an empty class were 0, multiple objects of that class could end up at the same memory address
- To avoid this, C++ assigns at least 1 byte to an empty class object
*/

class empty
{
};
int main()
{
	empty obj;
	cout << sizeof(obj); // prints 1
	return 0;
}

// lets do it later rn lets just upload to github