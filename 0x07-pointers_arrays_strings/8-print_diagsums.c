#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - writes the character c to stdout
 * @a: The character to print
 * @size: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
int i, x, sum = 0, sum1 = 0;
for (i = 0; i < size * size; i++)
	{
	sum = sum + a[i];
	i = i + size;
	}
printf("%d, ", sum);
for (x = (size - 1); x <= (size * size) - size; x++)
	{
	sum1 = sum1 + a[x];
	x = x + (size - 2);
	}
printf("%d\n", sum1);
}
