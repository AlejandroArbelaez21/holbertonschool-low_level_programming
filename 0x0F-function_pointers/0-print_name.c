#include <stdlib.h>
/**
 * print_name - writes the character n to stdout
 * @name: Name of the person
 * @f: pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
	{
	return;
	}
(*f)(name);
}
