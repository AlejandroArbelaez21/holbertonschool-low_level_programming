#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - writes the character n to stdout
 * @n: element of the structure
 * @head: head the node
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *tmp = *head;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	{
	return (NULL);
	}
if (*head == NULL)
	{
	*head = new_node;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	}

else
	{
	while (tmp->next != NULL)
		{
		tmp = tmp->next;
		}
	new_node->n = n;
	tmp->next = new_node;
	new_node->next = NULL;
	new_node->prev = tmp;
	}
return (new_node);
}
