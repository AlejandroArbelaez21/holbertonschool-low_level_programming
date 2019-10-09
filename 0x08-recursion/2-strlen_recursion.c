#include "holberton.h"
/**
 * _strlen_recursion - writes the character n to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	{
	return (0);
	}
return (1 + _strlen_recursion(s + 1));
}
