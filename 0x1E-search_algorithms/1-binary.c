#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - writes the character n to stdout
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int binary_search(int *array, size_t size, int value)
{
unsigned int L = 0, R = size - 1, floor = 0, num;

	if (array)
	{
		while (L <= R)
		{
			printf("Searching in array: ");
			for (num = L; num < R; num++)
			{
				printf("%d, ", num);
			}
			printf("%d\n", num);
			floor = ((L + R) / 2);
			if (array[floor] < value)
			{
				L = floor + 1;
			}
			else if (array[floor] > value)
			{
				R = floor - 1;
			}
			else
			{
				return (floor);
			}
		}
	return (-1);
	}
return (-1);
}
