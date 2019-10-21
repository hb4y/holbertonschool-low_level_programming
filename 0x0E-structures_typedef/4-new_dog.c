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
	char *cpy_name, *cpy_owner;
	int len;

	if (name == NULL || owner == NULL)
		return (NULL);

	bestia  = malloc(sizeof(dog_t));
	if (!bestia)
		return (NULL);

	for (len = 1; name[len] != '\0'; len++)
		;
	cpy_name = malloc(len + 1 * sizeof(char));
	if (!cpy_name)
	{
		free(bestia);
		return (NULL);
	}
	_strncpy(cpy_name, name, len);

	for (len = 1; owner[len] != '\0'; len++)
		;
	cpy_owner = malloc(len + 1 * sizeof(char));
	if (!cpy_owner)
	{
		free(cpy_name);
		free(bestia);
		return (NULL);
	}
	_strncpy(cpy_owner, owner, len);

	bestia->name = cpy_name;
	bestia->age = age;
	bestia->owner = cpy_owner;

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
