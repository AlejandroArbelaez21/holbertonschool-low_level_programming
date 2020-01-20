#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_djb2 - writes the character n to stdout
 * @str: size of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int new_hash;
int c;

new_hash = 5381;
while ((c = *str++))
	{
	new_hash = ((new_hash << 5) + new_hash) + c; /* hash * 33 + c */
	}
return (new_hash);
}
