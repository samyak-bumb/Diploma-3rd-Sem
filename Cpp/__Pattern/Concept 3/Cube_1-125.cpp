#include <iostream>
using namespace std;

int main()
{
  int i, j, x;

  for (j = 1; j <= 5; j++)
  {
    for (i = 1; i <= 5; i++)
    {
      // FIXME:
      cout << i * i * i << " ";
    }
    cout << endl;
  }

  return 0;
}
