#include "holberton.h"
#include <stdlib.h>
/**
 * *_realloc - writes the character n to stdout
 * @ptr: Size character to print
 * @old_size: size old of malloc
 * @new_size: size new of malloc
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
int x, i;
if (new_size > old_size)
	{
	x = old_size;
	}
else
	{
	x = new_size;
	}
if (new_size == old_size)
	{
return (ptr);
	}
if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
a = NULL;
a = malloc(new_size);
	if (a == NULL)
	{
	return (NULL);
	}
	if (ptr == NULL)
	{
	return (a);
	}
for (i = 0; i < x; i++)
	{
	a[i] = ((char *) ptr)[i];
	}
free(ptr);
return (a);
}
