#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - writes the character n to stdout
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *aux_hash;
unsigned long int idx;

if (ht == NULL || key == NULL)
{
	return (NULL);
}
idx = key_index((const unsigned char *)key, ht->size);
aux_hash = ht->array[idx];
while (aux_hash != NULL)
{
	if (strcmp(aux_hash->key, key) == 0)
	{
		return (aux_hash->value);
	}
	aux_hash = aux_hash->next;
}
return (NULL);
}
