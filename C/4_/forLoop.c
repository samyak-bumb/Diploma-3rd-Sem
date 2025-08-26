// When you know "Exactly how many times you want to loop" through a block of code, use the <for> loop instead of a <while> loop
// A for loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times.

/*
  Syntax:-
    for(intialize; test; increment OR decrement)
    {
      codeHere;
    }
*/

#include <stdio.h>

int main()
{
  for (int i = 1; i < 10; i++)
  {
    printf("%d\n", i);
  }

  return 0;
}
