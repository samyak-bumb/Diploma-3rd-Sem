/*
  Recursion - A function that "calls itself" is known as a recursive function & this technique is known as recursion.
*/

#include <stdio.h>

int facto(int x);

int main()
{
  int z;
  printf("Number: ");
  scanf("%d", &z);
  printf("Val of factorial %d is %d", z, facto(z));

  return 0;
}

int facto(int x)
{
  if (x == 1 || x == 0)
  {
    return 1;
  }
  else
  {
    return x * facto(x - 1);
  }
}
