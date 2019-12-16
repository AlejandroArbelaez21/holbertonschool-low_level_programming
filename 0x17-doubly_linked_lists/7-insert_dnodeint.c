#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - writes the character n to stdout
 * @h: head the node
 * @idx: is the index of the list where the new node should be added.
 * @n: number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp, *new_node;
unsigned int x = 1;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	{
	return (NULL);
	}
new_node->n = n;
if (idx == 0 || *h == NULL)
	{
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node = *h;
	return (new_node);
	}
else
	{
	tmp = *h;
	while (x < idx)
		{
		if (tmp->next == NULL)
			{
			new_node->prev = tmp;
			new_node->next = NULL;
			tmp->next = new_node;
			return (new_node);
			}
		else
			{
			tmp = tmp->next;
			}
		x++;
		}
	}
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;
return (new_node);
}
