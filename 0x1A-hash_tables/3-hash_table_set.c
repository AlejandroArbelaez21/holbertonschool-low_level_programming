#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - writes the character n to stdout
 * @ht: the hash table
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_hash;
unsigned long int idx;

if (!ht || !key || !value)
{
	return (0);
}
idx = key_index((const unsigned char *)key, ht->size);
if (ht->array[idx] && strcmp(ht->array[idx]->key, key) == 0)
{
	ht->array[idx]->value = strdup(value);
	return (1);
}
new_hash = malloc(sizeof(hash_node_t));
if (new_hash == NULL)
{
	return (0);
}
new_hash->key = strdup(key);
new_hash->value = strdup(value);
new_hash->next = ht->array[idx];
ht->array[idx] = new_hash;
return (1);
}
