#include "lists.h"
/**
* sum_dlistint - prints all the elements of the list.
* @head: the list.
*
* Return: the number of nodes of 0 if none.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *tmp = head;

if (head == NULL)
	{
	return (0);
	}
while (tmp != NULL)
	{
	sum = sum + tmp->n;
	tmp->next = tmp;
	}
return (sum);
}
