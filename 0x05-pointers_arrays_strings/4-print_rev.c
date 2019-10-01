#include "holberton.h"
/**
 * print_rev - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
int y, z;

for (y = 0; s[y] != '\0'; y++)
{
}
for (z = (y - 1); z >= 0; z--)
	{
	_putchar(s[z]);
	}
_putchar ('\n');
}
