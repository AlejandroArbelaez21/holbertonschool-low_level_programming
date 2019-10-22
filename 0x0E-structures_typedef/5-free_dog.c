#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - writes the character n to stdout
 * @d: Size character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
	{
	free((*d).name);
	free((*d).owner);
	free(d);
	}
}
