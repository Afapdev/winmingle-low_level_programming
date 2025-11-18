/*
 *
 
 * Author: Michael Ayanfe Robinson
 * program: WinMingle Community C Training
 * Description: This program prints reverse alpabet
   */

  

#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'z'; c >= 'a'; c--)
        putchar(c);

    putchar('\n');
    return (0);
}
