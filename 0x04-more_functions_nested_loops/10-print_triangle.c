#include "holberton.h"
/**
 * print_triangle - writes the character c to stdout
 * @size: to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
int a, b;
if (size > 0)
{
for (a = 1; a <= size; a++)
	{
	for (b = size; b >= 1; b--)
	{
	if (a >= b)
	{
	_putchar ('#');
	}
	else
	{
	_putchar (' ');
	}
	}
_putchar('\n');
}
	}
else
	{
	_putchar ('\n');
	}
}
