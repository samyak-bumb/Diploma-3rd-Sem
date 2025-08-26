// iostream is a library
#include <iostream>

/*
A namespace is a container that holds a collection of identifiers (such as funcs, vars & classes) to avoid naming conflicts.
The most commonly used namespace in C++ is std (standard)
*/
using namespace std;

// Every C++ program must have a "main" function. It is the entry point of the program, and execution begins here
int main()
{
  // cout = outputting data to the standard output stream
  // << = insertion operator to display text or values

  /*
    endl :-
      • Inserting a Newline Character
      • Flushing the Output Buffer
  */

  cout << "Nigga!" << endl
       << "1" << endl;
  // NOTE: You can also use printf to print the output
  // IMP: But cout is more convenient
  printf("Shibba\n2");
  return 0; // Exit Status Code
}
