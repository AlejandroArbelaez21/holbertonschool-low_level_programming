#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - writes the character n to stdout
 * @format: element of the strings
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0;
char *s;
while (format == NULL)
	{
	printf("\n");
	return;
	}

va_start(ap, format);
while (format[i])
	{
	switch (format[i])
		{
		case 'c':
		printf("%c", va_arg(ap, int));
		break;
		case  'i':
		printf("%i", va_arg(ap, int));
		break;
		case 'f':
		printf("%f", va_arg(ap, double));
		break;
		case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
			{
			printf("(nil)");
			break;
			}
		printf("%s", s);
		break;
		}
	if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
	 format[i] == 'f' || format[i] == 's'))
	printf(", ");
	i++;
	}
va_end(ap);
printf("\n");
}
