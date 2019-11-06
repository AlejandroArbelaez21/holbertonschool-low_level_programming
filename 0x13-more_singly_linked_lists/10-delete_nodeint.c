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
unsigned int i = 1;

if (*head == NULL)
	{
	return (-1);
	}

tmp = *head;
if (index == 0)
	{
	*head = (*head)->next;
	free(tmp);
	}
else
	{
	while (tmp && i < index)
		{
		tmp = tmp->next;
		i++;
		}
	if (i != index)
		{
		return (-1);
		}
copy = tmp->next;
tmp->next = copy->next;
free(copy);
	}
return (1);
}
