#include <iostream>
using namespace std;

int main()
{
  int fckMarks;
  cin >> fckMarks;
  if (fckMarks > 100)
  {
    cout << "Baavde ho rakhe hai ke?" << endl;
  }
  else if (fckMarks > 37)
  {
    cout << "Pass" << endl;
  }
  else
  {
    cout << "My Baabu is Failed" << endl;
  }

  // OR

  fckMarks > 33 ? cout << "Pass" << endl : cout << "Fail" << endl;

  return 0;
}
