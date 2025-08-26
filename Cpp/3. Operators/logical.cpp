#include <iostream>
using namespace std;

int main()
{
  int a = true;
  int b = false;

  cout << (a && b) << endl;
  cout << (a || b) << endl;
  cout << (!a) << endl; // This 1 is something Diff.

  // cout << (a !b) << endl; // This will give a error so just use "=" sign
  cout << (a != b) << endl;

  return 0;
}
