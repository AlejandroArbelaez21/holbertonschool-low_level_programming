#include "holberton.h"
/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
int a, b, c, d, e;
for (a = 0; s[a] != '\0'; a++)
{
b = a;
}

d = b;
for (c = 0; c <= (b / 2); c++)
{
e = s[c];
s[c] = s[d];
s[d] = e;
d--;
}
}
