#include "holberton.h"
#include <stdio.h>
/**
 * print_array - writes the character c to stdout
 * @a: The character to print
 * @b: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b;
for (a = 0; src[a] != '\0'; a+= 1)
	{
	}
for (b = 0; b <= a; b++)
	{
	dest[b] = src[b];
	}
return (dest);
}
