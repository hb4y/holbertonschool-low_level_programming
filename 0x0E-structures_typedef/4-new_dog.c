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
	
	bestia->name = _strncpy(bestia->name, name, len);
	bestia->owner = _strncpy(bestia->owner, owner, len2);
	bestia->age = age;

	return (bestia);
}

/**
 * _strncpy - copy string.
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
