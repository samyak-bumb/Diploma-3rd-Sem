#include <iostream>
using namespace std;

int main()
{
  int a = 5; // Binary: 0101
  int b = 3; // Binary: 0011

  cout << (a << 2) << endl; // Used to shift the bits of an integer to the left by a specified number of positions. It effectively multiplies the integer by 2 raised to the power of the shift amount
  cout << (a >> 2) << endl; // Used to shift the bits of an integer to the right by a specified number of positions. It effectively divides the integer by 2 raised to the power of the shift amount, rounding down.

  cout << (a & b) << endl;
  cout << (a | b) << endl;
  cout << (a ^ b) << endl; // It performs a bitwise XOR (exclusive OR) operation between the individual bits of two integers

  // Binary result: 1111 1111 1111 1111 1111 1111 1111 1010 (Decimal: -6)
  cout << (~a) << endl; // It performs a bitwise negation operation, which means it inverts each bit of an integer

  return 0;
}
