#include "holberton.h"
/**
 * print_last_digit - writes the character n to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = n * -1;
}
_putchar ('0' + n);
return (n);
}
