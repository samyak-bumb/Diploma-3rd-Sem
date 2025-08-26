// ► Try this - Write a program to print the value if it is divisible by 3 or 5
#include <iostream>
using namespace std;

int main()
{
  int val;
  cout << "Enter no." << endl;
  cin >> val;

  if ((val % 3 == 0) || (val % 5 == 0))
  {
    cout << "hi" << endl;
  }
  else
  {
    cout << "Bye" << endl;
  }

  return 0;
}
