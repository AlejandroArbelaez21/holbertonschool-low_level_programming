#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - writes the character n to stdout
 * @min: Size character to print
 * @max: size of bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int *array_range(int min, int max)
{
int *a;
int x;
if (min > max)
	{
	return (NULL);
	}
a = NULL;
a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
	return (NULL);
	}
for (x = 0; x < (max - min + 1); x++)
	{
	a[x] = min + x;
	}
return (a);
}
