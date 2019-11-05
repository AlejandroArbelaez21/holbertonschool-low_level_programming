#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - writes the character n to stdout
 * @head: head the node
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tmp;

if (head == NULL)
	{
	return (0);
	}

	tmp = head;
	while (tmp != NULL)
		{
		sum = sum + tmp->n;
		tmp = tmp->next;
		}
return (sum);
}
