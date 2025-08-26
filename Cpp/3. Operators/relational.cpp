#include <iostream>
using namespace std;

int main()
{
  int a = 9;
  int b = 6;

  // cout << a == b << endl; // You'll get a error here soo add brackets
  cout << (a == b) << endl; // False
  cout << (a != b) << endl; // True
  cout << (a < b) << endl;  // False
  cout << (a > b) << endl;  // True
  cout << (a <= b) << endl; // False
  cout << (a >= b) << endl; // True

  return 0;
}
