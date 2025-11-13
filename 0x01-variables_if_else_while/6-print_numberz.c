/**
 * Author: Michael Ayanfe Robinson
 * Program: WinMingle Community C Training
 * Description: This program prints all single-digit numbers
 *              of base 10 starting from 0, followed by a new line.
 *              It does not use any char variables and uses only
 *              two putchar calls in total.
 */

#include <stdio.h>

int main(void)
{
  int n;

  /* Print numbers 0 to 9 using ASCII values (48 = '0', 57 = '9') */
  for (n = 48; n <= 57; n++)
    putchar(n);

  /* Print a new line */
  putchar('\n');

  return (0);
}
