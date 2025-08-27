#include <iostream>
using namespace std;
class customer
{
	string name;
	int acnt_no, balance;

public:
	// Default Constructor :- (Takes no Parameter)
	customer()
	{
		name = "Josh";
		acnt_no = 1;
		balance = 999;
	}

	// // Parameterized Constructor :- (Takes parameter)
	// customer(string a, int b, int c)
	// {
	// 	name = a;
	// 	acnt_no = b;
	// 	balance = c;
	// }
	// Another case of Parameterized Constructor :-
	customer(string name, int acnt_no, int balance)
	{
		this->name = name;
		this->acnt_no = acnt_no;
		this->balance = balance;
	}

	// Constructor Overloading :-
	customer(string a, int b)
	{
		name = a;
		acnt_no = b;
		// Since the 3rd integer is not added it will give a garbage value next to INR Text
		// idk why tf the garbage value is fixed
		// lets add the 3rd int
		balance = 1000;
	}

	// Inline Constructor :-
	// REMEBER that we use "colon" here after createing a function and we use curly braces after declaring shit in that function
	// inline customer(string a, int b, int c) : name(a), acnt_no(b), balance(c) {}

	/*The above one is the code there was a error so commented it*/

	// Copy Constructor :-
	/*
	 It is a special type of constructor that initializes a new object as a copy of an existing object of the same class
	 It typically takes a reference to an object of the same class as its parameter & is used to create a new object with the same values as the original one
	*/
	customer(customer &A) // REMEBER to add &
	{
		name = A.name;
		acnt_no = A.acnt_no;
		balance = A.balance;
	}

	// A new user-defined function to display the output
	void disp()
	{
		cout << name << ", "
			  << acnt_no << ", "
			  << "INR " << balance << "\n";
	}
};
int main()
{
	customer c1;
	customer c2("Mosh", 2, 69);
	customer c4("Konichiwa", 3);
	// customer c10(c4);
	customer c10; // other way to display for copy constructor
	c10 = c4;

	c1.disp();
	c2.disp();
	c4.disp();
	c10.disp();

	return 0;
}