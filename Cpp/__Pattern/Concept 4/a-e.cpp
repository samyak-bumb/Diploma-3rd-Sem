#include <iostream>
using namespace std;

int main()
{
  int j;
  char i;

  for (j = 1; j <= 5; j++)
  {
    for (i = 'a'; i <= 'e'; i++)
    {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}

// OR

/*
#include <iostream>
using namespace std;

int main()
{
  int i, j;

  for (j = 1; j <= 5; j++)
  {
    for (i = 1; i <= 5; i++)
    {
      char aa = 'a' + i - 1;
      cout << aa << " ";
    }
    cout << endl;
  }

  return 0;
}
*/
