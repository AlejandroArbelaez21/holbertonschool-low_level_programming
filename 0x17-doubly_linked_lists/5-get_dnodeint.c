#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - writes the character n to stdout
 * @head: head the node
 * @index: is the index of the node
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp = head;
unsigned int x = 0;

if (head == NULL)
	{
	return (NULL);
	}

	while (tmp != NULL)
		{
		if (index == x)
			{
			return (tmp);
			}
		x++;
		tmp = tmp->next;
		}
return (tmp);
}
