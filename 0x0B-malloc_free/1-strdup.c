#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - writes the character n to stdout
 * @str: Size character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
unsigned int a, b;
char *c;

	if (str == NULL)
		return (NULL);
for (a = 0; str[a] != '\0'; a++)
	{
	}
c = NULL;
c = malloc(a * sizeof(char));
if (c == NULL)
	{
	return (NULL);
	}
for (b = 0; b <= a; b++)
	{
	c[b] = str[b];
}
return (c);
}
