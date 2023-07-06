#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between strings.
 * @n: the number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * If separator is NULL, don’t print it.
 * If one of the strings if NULL, print (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
