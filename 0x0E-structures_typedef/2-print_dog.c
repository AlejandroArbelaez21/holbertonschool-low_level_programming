#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - writes the character n to stdout
 * @d: Size character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_dog(struct dog *d)
{
char x = NULL;
if (d == NULL)
	{
	return;
	}
else
	{
	if (d->name == NULL)
		{
		printf("Name: (nil)\n");
		}
	else
		{
		printf("Name: %s\n", d->name);
		}

	if (d->age == x)
		{
		printf("Age: (nil)\n");
		}
	else
		{
		printf("Age: %f\n", d->age);
		}
	if (d->owner == NULL)
		{
		printf("Owner: (nil)\n");
		}
	else
		{
		printf("Owner: %s\n", d->owner);
		}
	}
}
