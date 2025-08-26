/*
  Format -
    Type var_name[=value]
*/

#include <iostream>
using namespace std;

int main()
{
  int age;  // Declaration of an integer variable
  age = 80; // Assignment of a value

  // double can store th Longest decimal No.
  double pi = 3.1415; // Declaration and initialization of a double variable

  cout << age << endl;
  cout << pi << endl;

  int apples;
  // NOTE: cin = Takes user input
  cin >> apples;

  cout << "No. of apples: " << apples << endl;

  return 0;
}
