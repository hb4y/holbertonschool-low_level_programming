#include "dog.h"

/**
 * free_dog - free memory
 * @d: dog struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
