#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - writes the character n to stdout
 * @ht: is the hash table
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *aux_hash;
unsigned long int x;
int cont = 0;

if (ht)
{
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		aux_hash = ht->array[x];
		while (aux_hash)
		{
			if (cont == 1)
			{
				printf(", ");
			}
			cont = 1;
			printf("'%s': '%s'", aux_hash->key, aux_hash->value);
			aux_hash = aux_hash->next;
		}
	}
printf("}\n");
}
}
