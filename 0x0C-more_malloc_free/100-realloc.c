#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - writes the character n to stdout
 * @str: Size character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *a;
if (new_size > old_size)
	{
	return (NULL);
	}
{
if (new_size == old_size)
	{
	}
return (ptr);
}
a = NULL;
a = malloc(ptr * sizeof(int));
	if (a = NULL)
	{
	return (NULL);
	}
free(a);
return(a);
}
