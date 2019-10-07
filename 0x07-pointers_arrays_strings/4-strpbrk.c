#include "holberton.h"
/**
 * _strpbrk - writes the character c to stdout
 * @s: The character to print
 * @accept: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
int i, x;
for (i = 0; s[i] != '\0'; i++)
for (x = 0; accept[x] != '\0'; x++)
	{
	if (s[i] == accept[x])
	return (s + i);
	}
return ('\0');
}
