#include "holberton.h"
/**
 * print_alphabet_x10 - writes the character x to stdout x10
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
char i, x;
for (i = '0'; i <= '9'; i++)
{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}

_putchar('\n');
}
return;
}
