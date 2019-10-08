#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - writes the character c to stdout
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
int i, x, sum = 0;
for (i = 0; a[i] <= size; i++)
	{
	for (x = 0; a[x] <= size; x++)
	{
	if (a[i] == a[x])
	{
sum = sum + a[x];
	}
	}
	}
}
