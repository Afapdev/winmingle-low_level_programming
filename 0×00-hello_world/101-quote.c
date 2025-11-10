/**
 * Author: Michael Ayanfe Robinson
 * Program: WinMingle Community C Training
 * Description: I will be Writing a C program that prints exactly: and that piece of art is useful" - Dora Korpar, 2015-10-19 to the standard error. In this file called 101-quote.c
 */



#include <unistd.h>

int main(void)
{
  char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  (void)write(2, msg, sizeof(msg) - 1);
  return (1);
}
