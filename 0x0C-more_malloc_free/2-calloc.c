#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - writes the character n to stdout
 * @nmemb: Size character to print
 * @size: size of bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int x;
if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
a = NULL;
a = malloc(nmemb * sizeof(size));
	if (a == NULL)
	{
	return (NULL);
	}
for (x = 0; x < nmemb * size; x++)
	{
	a[x] = 0;
	}
return (a);
}
