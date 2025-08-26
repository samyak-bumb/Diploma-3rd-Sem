// IMP: NOTE: Common misconception

// > "&" v/s "&&"
// ► 1st is Bitwise AND Operator & 2nd is Logical AND Operator

// > "|" v/s "||"
// ► 1st is Bitwise OR Operator & 2nd is Logical OR Operator

#include <iostream>
using namespace std;

int main()
{
  int val;
  cout << "Type the value" << endl;
  cin >> val;

  if ((val % 2 == 0) && (val % 3 == 0))
  {
    cout << val << " It's divisible by no. 2 & 3" << endl;
  }
  else
  {
    cout << "It's not divisible by 2 or 3" << endl;
  }

  return 0;
}
