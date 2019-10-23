#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - writes the character n to stdout
 * @name: Name of the person
 * @f: pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int y;
if (array == NULL || size == 0 || action == NULL)
	{
	return;
	}
	for (y = 0; y < size; y++)
		{
			(*action)(array[y]);

		}
}
