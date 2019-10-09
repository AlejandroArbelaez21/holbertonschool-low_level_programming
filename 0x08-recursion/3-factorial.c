#include "holberton.h"
/**
 * factorial - writes the character n to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
if (n < 0)
	{
	return (-1);
	}
else if (n == 0)
	{
	n = 1;
	}
else
	{
	n = n * factorial(n - 1);
	}
return (n);
}
