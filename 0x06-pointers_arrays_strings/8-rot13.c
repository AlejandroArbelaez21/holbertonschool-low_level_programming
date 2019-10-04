#include "holberton.h"
/**
 * rot13 - writes the character c to stdout
 * @s: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *rot13(char *s)
{
int a, b;
char ori[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char reem[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; s[a] != '\0'; a++)
	for (b = 0; ori[b] != '\0'; b++)
	{
	if (s[a] == ori[b])
	{
	s[a] = reem[b];
	break;
	}
	}
return (s);
}
