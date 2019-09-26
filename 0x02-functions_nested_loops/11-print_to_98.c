#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
int z;
 	if (n > 98)
	{
for (z = n; z >= 98; z--)
_putchar (z + '0');
_putchar (',');
_putchar (' ');
_putchar ('\n');
	}
	else if (n < 98)
	{
for (z = 'n'; z <= 98; z++)
_putchar (z + '0');
_putchar (',');
_putchar (' ');
_putchar ('\n');
	}
	else if (n == 98)
	{
	_putchar (n + '0');
	_putchar ('\n');
	}
}
