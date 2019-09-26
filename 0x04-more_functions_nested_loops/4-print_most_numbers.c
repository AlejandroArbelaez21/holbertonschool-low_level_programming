#include "holberton.h"
/**
 * print_most_numbers - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
if (c == 50)
continue;
else if (c == 52)
continue;
_putchar (c);
}
_putchar ('\n');
}
