#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - writes the character n to stdout
 * @head: head the node
 * @index: is the index of the node
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;
unsigned int i = 0;

if (head == NULL)
	{
	tmp = head;
	while (tmp != NULL)
	{
		if (i == index)
		{
		return (tmp);
		}
	i++;
	tmp = tmp->next;
	}
	}
return (NULL);
}
