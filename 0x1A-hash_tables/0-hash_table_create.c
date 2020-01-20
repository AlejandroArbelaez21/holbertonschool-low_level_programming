#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - writes the character n to stdout
 * @size: size of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_hash;

if (size)
	{
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		{
		return (NULL);
		}
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_table_t) * size);
	if (new_hash->array == NULL)
		{
		return (NULL);
		}
	return (new_hash);
	}
else
	{
	return (NULL);
	}
}
