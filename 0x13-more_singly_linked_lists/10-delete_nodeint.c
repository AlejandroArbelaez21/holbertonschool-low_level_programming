#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - writes the character n to stdout
 * @head: head the node
 * @index: is the index of the list where the new node should be delete.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy;
unsigned int i;

if (*head == NULL)
	{
	return (-1);
	}

tmp = *head;
for (i = 1; tmp != NULL; i++)
	{
	if (index == 0)
		{
		copy = tmp;
		*head = tmp->next;
		free(copy);
		}
	else if (i == index)
		{
		copy = tmp->next;
		tmp->next = (tmp->next)->next;
		free(copy);
		}
return (1);
	}
tmp = tmp->next;
return (1);
}
