// TODO: Revise this!
#include <iostream>
using namespace std;

int main()
{
  int i, j;

  for (j = 1; j <= 5; j++)
  {
    char ae = 'a' + j - 1;
    for (i = 1; i <= 5; i++)
    {
      cout << ae
           << " ";
    }
    cout << endl;
  }

  return 0;
}
