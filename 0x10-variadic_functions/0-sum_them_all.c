#include <stdio.h>
#include <stdarg.h>
#include <variadic_functions.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 – 0.
 *         Otherwise - sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int  sum  = 0;

	va_list ap;

	va_sart(ap, n);

	for (unsigned int i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
