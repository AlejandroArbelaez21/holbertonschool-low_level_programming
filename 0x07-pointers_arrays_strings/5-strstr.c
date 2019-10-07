#include "holberton.h"
/**
 * _strstr - writes the character c to stdout
 * @haystack: The character to print
 * @needle: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{
int i, x;
for (i = 0; haystack[i] != '\0'; i++)
for (x = 0; needle[x] != '\0'; i++)
	{
	if (haystack[i] == needle[x])
	return (haystack + i);
	}
return ('\0');
}
