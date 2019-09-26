#include "holberton.h"
/**
 * print_square - writes the character c to stdout
 * @size: to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
int a, b;
if (size > 0)
for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	_putchar ('#');
	_putchar ('\n');
	}
else if (size <= 0)
	{
	_putchar ('\n');
	}
}
