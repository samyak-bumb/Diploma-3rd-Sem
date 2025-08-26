#include <stdio.h>

float avg(int a, int b, int c);

int main()
{
  int a, b, c;

  printf("Val: ");
  scanf("%d", &a);

  printf("Val: ");
  scanf("%d", &b);

  printf("Val: ");
  scanf("%d", &c);

  printf("Ans: %f", avg(a, b, c));

  return 0;
}

float avg(int a, int b, int c)
{
  float result;
  result = (float)(a + b + c) / 3;

  return result;
}
