#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - writes the character n to stdout
 * @b: Size character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *malloc_checked(unsigned int b)
{
int *c;

c = NULL;
c = malloc(b);
if (c == NULL)
	{
	exit(98);
	}
return (c);
}
