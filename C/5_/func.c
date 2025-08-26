/*
A function is a block of code that performs a specific task when called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

Void:-
  The type for the result of a function that returns normally, but does not provide a result value to its caller.

*/

#include <stdio.h>

void ass(); // Function Prototype

int main()
{
  ass();
  return 0;
}
void ass()
{
  printf("Ahh Shit Here we Go Again!");
}
