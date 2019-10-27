#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - writes the character n to stdout
 * @n: element of the sum
 * @separator: is a ", "
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
if (separator == NULL)
	{
	}
va_start(ap, n);
for (i = 0; i < n; i++)
	{
	if (i < n)
		{
		printf("%d", va_arg(ap, int));
		}
	if (i < (n - 1))
		{
		printf("%s", separator);
		}
	}
va_end(ap);
printf("\n");
}
