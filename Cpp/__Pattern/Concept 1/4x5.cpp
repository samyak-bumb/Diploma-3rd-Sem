#include <iostream>
using namespace std;

int main()
{
  int i, j;

  // Row
  for (j = 1; j <= 4; j = j + 1)
  {
    // Column
    for (i = 1; i <= 5; i = i + 1)
    {
      cout << "10"
           << " ";
    }
    cout << endl;
  }

  return 0;
}
