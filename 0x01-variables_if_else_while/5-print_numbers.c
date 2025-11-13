/**
 * Author: Michael Ayanfe Robinson
 * Program: WinMingle Community C Training
 * Description: This program prints all single-digit numbers
 *              of base 10 starting from 0, followed by a new line.
 *              It uses only the putchar function and keeps
 *              all code inside the main function.
 */

#include <stdio.h>

int main(void)
{
  char n;

  /* Print numbers 0 to 9 using ASCII values */
  for (n = '0'; n <= '9'; n++)
    putchar(n);

  /* Print a new line */
  putchar('\n');

  return (0);
}
