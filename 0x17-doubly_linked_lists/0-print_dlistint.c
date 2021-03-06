#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - writes the character n to stdout
 * @h: element of the list
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_dlistint(const dlistint_t *h)
{
int x = 0;

if (h == NULL)
	{
	return (x);
	}
while (h)
	{
	printf("%d\n", h->n);
	x++;
	h = h->next;
	}
return (x);
}
