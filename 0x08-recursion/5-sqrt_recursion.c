#include "holberton.h"
/**
 * _other_sqrt - writes the character n to stdout
 * @x: The character to print
 * @y: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _other_sqrt(int x, int y)
{
if (x * x == y)
	{
	return (x);
	}
else if (x * x > y)
	{
	return (-1);
	}
return (_other_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - writes the character n to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
if (n == 0)
	{
	return (0);
	}
return (_other_sqrt(1, n));
}
