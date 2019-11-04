#include <stdio.h>
#include "lists.h"
/**
 * print_listint - writes the character n to stdout
 * @h: element of the list
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_listint(const listint_t *h)
{
int i = 0;
while (h)
{
if (h->n == '\0')
	{
	}
else
	{
	printf("%d\n", h->n);
	}
i++;
h = h->next;
}
return (i);
}
