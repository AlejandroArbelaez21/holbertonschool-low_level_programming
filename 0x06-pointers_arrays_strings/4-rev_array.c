#include "holberton.h"
/**
 * reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
int c, e;

for (c = 0; c <= n; c++)
{
e = a[c];
a[c] = a[n - 1];
a[n - 1] = e;
n--;
}
}
