#include "holberton.h"
void print_alphabet_x10(void)
{
char i, x;
for (i = '0'; i <='9'; i++)
{
	for (x = 'a'; x <='z'; x++)
	{
	_putchar(x);
	}

_putchar('\n');
}
return;
}
