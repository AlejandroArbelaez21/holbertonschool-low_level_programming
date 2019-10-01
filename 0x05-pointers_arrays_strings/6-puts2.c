#include "holberton.h"
/**
 * puts2 - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
int a, b;
for (a = 0; str[a] != '\0'; a++)
{
}
for (b = 0; b <= a; b++)
	{
_putchar(str[b]);
b++;
	}
_putchar('\n');
}
