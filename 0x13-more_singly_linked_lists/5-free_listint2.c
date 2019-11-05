#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - writes the character n to stdout
 * @head: head the node
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
while (head != NULL)
        {
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	}
*head = NULL;
}
