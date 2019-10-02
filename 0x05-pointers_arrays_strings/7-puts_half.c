#include "holberton.h"
/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
int a, b;
for (a = 0; str[a] != '\0'; a++)
{
}
if (a % 2 == 0)
	for (b = a / 2; b <= a - 1; b++)
		{
		_putchar (str[a]);
		}
		else
		{
	for (b = ((a + 1) / 2); b <= a - 1; b++)
		_putchar (str[b]);
		}
_putchar('\n');
}
