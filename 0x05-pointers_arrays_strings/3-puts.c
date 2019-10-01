#include "holberton.h"
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
int a;
for (a = 0; *str <= 'NULL'; str++)
_putchar(a);
_putchar('\n');
}

