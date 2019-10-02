#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b;
for (a = 0; src[a] != '\0'; a += 1)
	{
	}
for (b = 0; b <= a; b++)
	{
	dest[b] = src[b];
	}
return (dest);
}
