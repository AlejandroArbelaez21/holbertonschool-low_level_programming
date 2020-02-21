#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - writes the character n to stdout
 * @size: size of the array
 * @key: is the key
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int new_hash;
unsigned long int idx;

new_hash = hash_djb2(key);
idx = new_hash % size;
return (idx);
}
