#include "_putchar.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times,
 *                      each alphabet on its own line.
 *
 * Uses only two calls to _putchar: one inside the inner loop
 * (to print each letter) and one after the inner loop (to print
 * the newline). The rest of the logic is handled with plain
 * C loops.
 */
void print_alphabet_x10(void)
{
  int line, letter;

  for (line = 0; line < 10; line++) {
    for (letter = 0; letter < 26; letter++) {
      _putchar('a' + letter);   /* prints a‑z */
    }
    _putchar('\n');                /* moves to the next line */
  }
}
