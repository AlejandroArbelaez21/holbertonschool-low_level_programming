#include "holberton.h"
/**
 * print_diagonal - writes the character c to stdout
 * @n: to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int a, b;
if (n > 0)
for (a = 0; a <= n; a++)
	{
	for (b = 1; b <= n; b++)
	{
	if (a == b)
	{
	_putchar ('\\');
	_putchar ('\n');
	}
	else if (a > b)
	{
	_putchar (' ');
	}
}
}
else if (n <= 0)
	{
	_putchar ('\n');
	}
}
