#include "holberton.h"
/**
 * cap_string - writes the character c to stdout
 * @s: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
	{
	if (s[a] >= 97 && s[a] <= 122 && a == 0)
	{
	s[a] = s[a] - 32;
	}
	else if ((s[a + 1] >= 97 && s[a + 1] <= 122) && (s[a] == ','
	 || s[a] == ';' || s[a] == '.' || s[a] == '!' || s[a] == '?'
	|| s[a] == '"' || s[a] == '(' || s[a] == ')' || s[a] == '{'
	|| s[a] == '}' || s[a] == ' ' || s[a] == '\t' || s[a] == '\n'))
	{
	s[a + 1] = s[a + 1] - 32;
	}
	}
return (s);
}
