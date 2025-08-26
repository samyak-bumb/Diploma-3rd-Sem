#include <stdio.h>
#include <math.h>

int main()
{
  int side;

  printf("Give the value: ");
  scanf("%d", &side);
  printf("Answer: %1.f", pow(side, 2));

  return 0;
}
