#include <stdio.h>
#include "lists.h"
/**
 * list_len - writes the character n to stdout
 * @h: element of the structure
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
	{
	i++;
	h = h->next;
	}
return (i);
}
