#include "holberton.h"
/**
 * _puts - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
int y;
for (y = 0; *str != '\0'; y++)
	{
_putchar(*str);
str++;
	}
_putchar('\n');
}

