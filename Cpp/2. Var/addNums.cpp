#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "Enter 1st No. - ";
  cin >> a;

  int b;
  cout << "Enter 2nd No. - ";
  cin >> b;

  // Swap the vars
  int c;
  c = b;
  b = a;
  a = c;

  cout << "a:" << a << endl;
  cout << "b:" << b << endl;

  cout << "Output: " << a + b << endl;

  return 0;
}
