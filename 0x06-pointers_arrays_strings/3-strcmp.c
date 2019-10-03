#include "holberton.h"
/**
 * _strcmp - writes the character c to stdout
 * @s1: The character to print
 * @s2: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;
int b = 0;

while ((s1[a] != '\0' && s2[b] != '\0') && s1[a] == s2[b])
{
a++;
b++;
}

if (s1 == s2)
	{
	return (0);
	}
else
	{
	return (s1[a] - s2[b]);
	}


}
