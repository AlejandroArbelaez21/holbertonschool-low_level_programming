#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * get_bit - writes the character n to stdout
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > sizeof(long int) * sizeof(unsigned int))
	{
	return (-1);
	}
if ((n >> index) & 1)
	{
	return (1);
	}
else
	{
	return (0);
	}
}
