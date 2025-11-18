/*
 * Author: Michael Ayanfe Robinson
 * Program: WinMingle Community C Training
 * Description: This program prints all single-digit numbers separated
 *              by commas and spaces.
 */

#include <stdio.h>

int main(void)
{
  int n;

  for (n = 0; n <= 9; n++)
    {
      putchar(n + '0');

      if (n != 9)   /* Do not print comma+space after last digit */
	{
	  putchar(',');
	  putchar(' ');
	}
    }

  putchar('\n');
  return (0);}
