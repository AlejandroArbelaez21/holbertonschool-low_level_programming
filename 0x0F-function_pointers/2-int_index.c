#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - writes the character n to stdout
 * @array: Array
 * @size: is the size of the array
 * @cmp: is a pointer to the function you need to use
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
	if (array == NULL || size <= 0 || cmp == NULL)
	{
	return (-1);
	}
	for (a = 0; a < size; a++)
	{
	if ((*cmp)(array[a]) != 0)
		{
		return (a);
		}
	}
return (-1);
}
