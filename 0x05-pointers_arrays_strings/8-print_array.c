#include "holberton.h"
#include <stdio.h>
/**
 * print_array - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x < - 1)
		{
		printf(", ");
		}
	}
printf("\n");
}
