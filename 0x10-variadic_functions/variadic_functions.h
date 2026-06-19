#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Task 0 */
int sum_them_all(const unsigned int n, ...);

/* Task 1 */
void print_numbers(const char *separator,
                   const unsigned int n, ...);

/* Task 2 */
void print_strings(const char *separator,
                   const unsigned int n, ...);

/* Task 3 */

typedef struct print
{
	char *symbol;
	void (*f)(va_list);
} print_t;
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

void print_all(const char * const format, ...);

#endif
