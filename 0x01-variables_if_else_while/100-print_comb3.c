/*
 * Author: Michael Ayanfe Robinson
 * Program: WinMingle Community C Training
 * Description: This program prints all possible different combinations
 *              of two digits using only integers and up to five putchar calls.
 */

#include <stdio.h>

int main(void)
{
  int a, b;

  for (a = 0; a <= 8; a++)
    {
      for (b = a + 1; b <= 9; b++)
	{
	  putchar(a + '0');
	  putchar(b + '0');

	  if (a != 8 || b != 9)    /* avoid printing comma+space at the end */
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }

  putchar('\n');
  return (0);
}
