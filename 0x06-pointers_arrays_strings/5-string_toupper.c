#include "holberton.h"
/**
 * reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
	{
	if (s[a] >= 97 && s[a] <= 122)
	{
	s[a] = s[a] - 32;
	}
	}
return (s);
}
