#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: char pntr
 * @age: float number
 * @owner: char pntr
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bestia;
	int len, len2;

	bestia  = malloc(sizeof(dog_t));

	if (bestia == NULL || name == NULL || owner == NULL)
		return (NULL);

	for (len = 1; name[len] != '\0'; len++)
		;
	for (len2 = 1; owner[len2] != '\0'; len2++)
		;

	bestia->name = malloc(len + 1 * sizeof(char));

	if (!bestia->name)
	{
		free(bestia);
		return (NULL);
	}

	bestia->owner = malloc(len + 1 * sizeof(char));

	if (!bestia->owner)
	{
		free(bestia->name);
		free(bestia);
		return (NULL);
	}

	bestia->name = _strcpy(bestia->name, name);
	bestia->owner = _strcpy(bestia->owner, owner);
	bestia->age = age;

	return (bestia);
}

/**
 * _strcpy - copy an array.
 * @dest: destiny
 * @src: source
 * Return: char *.
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}
