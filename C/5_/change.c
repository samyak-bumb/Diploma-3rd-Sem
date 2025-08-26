#include <stdio.h>

void change(int a);

int main()
{
  int b;
  b = 360;

  printf("%d\n", b);
  change(b);
  printf("%d\n", b);

  return 0;
}

void change(int b)
{
  b = 77;
}
