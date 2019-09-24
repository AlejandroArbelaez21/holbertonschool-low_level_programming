	#include "holberton.h"
/**
 * times_table - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
char a, b;
for (a = '0'; a <= '9'; a++)
{
	for (b = '0'; b <= '9'; b++)
	_putchar(b);
	if (a == '9' && b == '9')
	{
	}
	else
	{
	_putchar(',');
        _putchar(' ');
        _putchar(' ');
	}
_putchar('\n');
	}
return;
}
