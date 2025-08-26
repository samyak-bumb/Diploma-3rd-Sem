#include <iostream>
using namespace std;

int main()
{
  int a = 6;
  int b = 6;
  int c = 6;
  int d = 6;
  /* Waste of Time
    cout << (+a) << endl;
    cout << (-a) << endl;
  */

  cout << (++a) << endl; // Pre-Increment
  cout << (--b) << endl; // Pre-Decrement
  cout << (c++) << endl; // Post-Increment
  cout << (d--) << endl; // Post-Decrement

  return 0;
}
