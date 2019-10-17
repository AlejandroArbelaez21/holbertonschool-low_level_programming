#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - writes the character n to stdout
 * @s1: Size character to print
 * @s2: Character to print
 * @n: size bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, x, y;
char *c;
for (a = 0; s1[a] != '\0'; a++)
	{
	}
for (b = 0; s2[b] != '\0'; b++)
	{
	}
if (n >= b)
	{
	/*usar la cadena s2
	*/
	}
c = NULL;
c = malloc((a + b + 1) * sizeof(char));
	if (c == NULL)
		{
		return (NULL);
		}
for (x = 0; s1[x] != '\0'; x++)
	{
	c[x] = s1[x];
	}
for (y = 0; s2[y] != '\0'; y++)
	{
	c[x + y] = s2[y];
	}
	c[a + b] = '\0';

return (c);

}
