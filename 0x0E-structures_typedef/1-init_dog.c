#include "dog.h"

/**
 * init_dog - function
 * @d: dog struct
 * @name: char pntr
 * @age: float number
 * @owner: char pntr
 * Return: void - dog init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
