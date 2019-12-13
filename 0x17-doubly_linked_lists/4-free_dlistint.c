#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - writes the character n to stdout
 * @n: element of the structure
 * @head: head the node
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp = NULL;

while (head)
	{
	tmp = head;
	head = head->next;
	free(tmp);
	}

}
