#include "holberton.h"
#include <stdlib.h>
/**
 * *alloc_grid - writes the character n to stdout
 * @width: Size character to print
 * @height: Size character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
int f, c;
int **x;
	if (width <= 0 || height <= 0)
		{
		return (NULL);
		}
x = malloc(height * sizeof(int *));
	if (x == NULL)
		{
		return (NULL);
		}

for (f = 0; f < height; f++)
	{
	x[f] = malloc(width * sizeof(int));
	if (x[f] == NULL)
	{
	return (NULL);
	}

for (c = 0; c < height; c++)
	{
	x[f][c] = 0;
	}
}
	return (x);
}

