#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - writes the character n to stdout
 * @n: element of the structure
 * @head: head the node
 * @idx: is the index of the list where the new node should be added.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *tmp;
unsigned int i;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	{
	return (NULL);
	}
new_node->n = n;
if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

else
	{
	tmp = *head;
	for (i = 1; i != idx; i++)
		{
		if (tmp->next != NULL)
			{
			tmp = tmp->next;
			}
		else
			{
			return (NULL);
			}
		}
	}
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}
