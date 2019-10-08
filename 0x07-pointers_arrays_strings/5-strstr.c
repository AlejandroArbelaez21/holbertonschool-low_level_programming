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
int i, x, y = 0;
if (*needle == '\0')
{
return(haystack);
}
for (i = 0; haystack[i] != '\0'; i++)
	{
	if (haysctack[i] == needle[0])
	while (haystack[i + y] == needle[y])
	}
return ('\0');
}
