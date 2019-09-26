#include "holberton.h"
/**
 * more_numbers - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
int c, d;
for (c = 0; c <= 9; c++)
	{
	for (d = 0; d <= 14; d++)
	{
	if (d > 9)
	{
	_putchar ((d / 10) + '0');
	}
_putchar ((d % 10) + '0');
}
_putchar ('\n');
}
}
