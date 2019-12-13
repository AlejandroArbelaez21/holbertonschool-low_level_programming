#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - writes the character n to stdout
 * @h: element of the list
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t dlistint_len(const dlistint_t *h)
{
int x = 0;

while (h)
	{
	x++;
	h = h->next;
	}
return (x);
}
