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


char *_strcat(char *dest, char *src)
{
int a = _strlen(dest);
int b;

for (b = 0; src[b] != '\0'; b++)
	{
dest[a + b] = src[b];
	}

dest[a + b] = '\0';

return (dest);
}
