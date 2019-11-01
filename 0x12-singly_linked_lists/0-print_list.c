#include <stdio.h>
#include "lists.h"
/**
 * print_list - writes the character n to stdout
 * @h: element of the structure
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
else
	{
	printf("[%d] %s\n", h->len, h->str);
	}
i++;
h = h->next;
}
return (i);
}
