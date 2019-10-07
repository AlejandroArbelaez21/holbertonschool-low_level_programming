#include "holberton.h"
/**
 * print_chessboard - writes the character c to stdout
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_chessboard(char (*a)[8])
{
int i, x;
for (i = 0; i <= 7; i++)
	{
	for (x = 0; x <= 7; x++)
	_putchar(a[i][x]);
_putchar('\n');
	}
}
