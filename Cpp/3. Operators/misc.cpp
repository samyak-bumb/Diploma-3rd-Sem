/*
#include <iostream>
using namespace std;

int main()
{
  // Comma Operator :-
  // It Allows you to evaluate multiple expressions separated by commas.
  //  It evaluates each expression from left to right and returns the value of the rightmost expression
  int a = 5, b = 10, c;
  c = (a++, b++); // c will be 10 (the value of b)
  cout << c << endl;

  // Conditional Operator (Ternary Operator) (? Exp1:Exp2) :-
  // It Allows you to create conditional expressions with a compact syntax
  // It's often used as a "shorthand" for simple if-else statements
  int x = 10;
  int y = 20;
  int result = (x > y) ? x : y; // result will be 20
  cout << result << endl;

  // sizeof Operator:-
  // It used to determine the size, in bytes, of a data type or a variable
  // It is often used when working with "memory allocation" and "dynamic data structures"
  int d = 6;
  int sizeOfInt = sizeof(int); // sizeOfInt will typically be 4 (bytes) on most systems
  // cout << sizeOfInt << endl;

  return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
  int a = 6;
  cout << sizeof(a) << endl;
  cout << (&a) << endl;

  char name = 'a';
  cout << sizeof(name) << endl;

  bool flag;
  a == name ? flag = true : flag = false;
  cout << flag << endl;

  return 0;
}
