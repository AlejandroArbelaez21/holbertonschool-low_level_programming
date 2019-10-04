#include "holberton.h"
/**
 * leet - writes the character c to stdout
 * @s: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *s)
{
int a, b;
char ori[] = "aAeEoOtTlL";
char reem[] = "4433007711";

for (a = 0; s[a] != '\0'; a++)
	for (b = 0; ori[b] != '\0'; b++)
	{
	if (s[a] == ori[b])
	{
	s[a] = reem[b];
	}
	}
return (s);
}
