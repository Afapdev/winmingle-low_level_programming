/**
 * Author: Michael Ayanfe Robinson
 * Program: WinMingle Community C Training
 * Description: This program prints the alphabet in lowercase,
 *              except for the letters 'q' and 'e',
 *              followed by a new line.
 *              It uses only the putchar function and includes
 *              just two putchar calls in total.
 */

#include <stdio.h>

int main(void)
{
  char c;

  /* Print all lowercase letters except 'q' and 'e' */
  for (c = 'a'; c <= 'z'; c++)
    {
      if (c != 'q' && c != 'e')
	putchar(c);
    }

  /* Print a new line */
  putchar('\n');

  return (0);
}
