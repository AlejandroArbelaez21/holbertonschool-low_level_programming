#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - writes the character n to stdout
 * @size: Size character to print
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
unsigned int a;
char *fifi;
if (size == 0)
	{
	return (NULL);
	}
fifi = NULL;
fifi = malloc(size * sizeof(char));
if (fifi == NULL)
	{
	return (NULL);
	}
for (a = 0; a < size; a++)
	{
	fifi[a] = c;
	}
return (fifi);
}
