#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - writes the character n to stdout
 * @d: Size character to print
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		{
		return (NULL);
		}
d->name = name;
d->age = age;
d->owner = owner;
}
