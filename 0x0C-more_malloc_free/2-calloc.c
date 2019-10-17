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
int *a;
if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
a = 0;
a = malloc(nmemb * sizeof(size));
	if (a == NULL)
	{
	return (NULL);
	}
return (a);
}
