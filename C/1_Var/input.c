#include <stdio.h>

int main()
{
  int a, b;

  printf("1st value\n"); // It is used for "Output"
  scanf("%d", &a);                 // It is used for "Input"

  printf("2nd value\n");
  scanf("%d", &b);

  printf("\"a\" + \"b\" = %d", a + b);

  return 0;
}
