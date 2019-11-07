#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int _pow_recursion(int x, int y);

/**
 * _pow_recursion - writes the character n to stdout
 * @x: The character to print
 * @y: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	{
	return (-1);
	}
else if (y == 0)
	{
	return (1);
	}
return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - writes the character n to stdout
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int a, sum = 0, n;
int x;

if (b == NULL)
	{
	return (0);
	}
for (a = 0; b[a]; a++)
	{
	}
for (x = 0; b[x] != '\0'; x++)
	{
	if (b[x] == 48)
		{
		n = 0;
		}
	else if (b[x] == 49)
		{
		n = 1;
		}
	else
		{
		return (0);
		}
	sum = sum + (n * _pow_recursion(2, (a - 1)));
	a--;
	}
return (sum);
}

