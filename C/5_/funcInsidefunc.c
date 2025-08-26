#include <stdio.h>

void gM();
void gA();
void gN();

int main()
{
  gM();

  return 0;
}

void gM()
{
  printf("Hmm Morning\n");
  gA();
}
void gA()
{
  printf("Afternoon take a Small Nap (4Hr's)\n");
  gN();
}
void gN()
{
  printf("Fucing Good Night, Ohhh Yeahhh!");
}
