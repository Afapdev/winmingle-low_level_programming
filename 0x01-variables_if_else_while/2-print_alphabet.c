/**
 * Author: Michael Ayanfe Robinson
 * Program: Print lowercase alphabet
 * Description: This program prints the alphabet in lowercase,
 *              followed by a new line, using only putchar.
 *              It follows the restriction of using only
 *              two putchar calls in the source code.
 */

#include <stdio.h>

int main(void)
{
  char c;

  /* Loop through letters 'a' to 'z' */
  for (c = 'a'; c <= 'z'; c++)
    putchar(c);

  /* Print a new line after the alphabet */
  putchar('\n');

  return (0);
}
