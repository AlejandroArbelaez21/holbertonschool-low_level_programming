#include "holberton.h"
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
int y;
for (y = 0; *s != '\0'; s++)
{
y++;
}
return (y);
}

/**
 * _strncat - writes the character c to stdout
 * @src: The character to print
 * @dest: The character to print
 * @n: The number of bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
int a = _strlen(dest);
int b;

for (b = 0; src[b] != '\0' && b < n; b++)
	{
dest[a + b] = src[b];
	}

dest[a + b] = '\0';

return (dest);
}
