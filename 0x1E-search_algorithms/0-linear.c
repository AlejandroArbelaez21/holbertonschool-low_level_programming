#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - writes the character n to stdout
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int linear_search(int *array, size_t size, int value)
{
size_t num;
int final = 0;

if (array != NULL)
	{
	for (num = 0; num < size; num++)
		{
		printf("Value checked array[%ld] = [%d]\n", num, array[num]);
		if (array[num] == value)
			{
			return (final);
			}
		final++;
		}
	}
return (-1);
}
