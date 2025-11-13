/**
 * Author: Micael Ayanfe Robinson
 * Program: WinMingle Community C Training
 * Description: This program prints the alphabet in lowercase,
 *              then in uppercase, followed by a new line.
 *              It uses only the putchar function and is
 *              restricted to three putchar calls in total.
 */

#include <stdio.h>

int main(void)
{
  char c;

  /* Print lowercase letters */
  for (c = 'a'; c <= 'z'; c++)
    putchar(c);

  /* Print uppercase letters */
  for (c = 'A'; c <= 'Z'; c++)
    putchar(c);

  /* Print new line */
  putchar('\n');

  return (0);
}
