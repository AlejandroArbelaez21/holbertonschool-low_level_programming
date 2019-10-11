#include "holberton.h"
/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b;
int c = 0;

for (a = 0; s[a]; a++)
	if (s[a] == ',')
	break;
	else
	{
	for (b = 0; accept[b] != '\0'; b++)
	{
	if (s[a] == accept[b])
	{
	c++;
	}
	}
	}
return (c);
}
