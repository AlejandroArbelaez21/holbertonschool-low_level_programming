#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - writes the character n to stdout
 * @head: head the node
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int copy;

if (*head == NULL)
	{
	return (0);
	}

copy = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);
return (copy);
}
