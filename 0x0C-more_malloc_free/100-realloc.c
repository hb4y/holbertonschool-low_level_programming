#include "holberton.h"

/**
 * _realloc - reallocates memory block
 * @ptr: originnal ptr
 * @old_size: old size
 * @new_size: new size
 * Return: reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;

	arr = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);

	arr = malloc(new_size);

	if (new_size > old_size)
	{
		_memcpy(arr, ptr, old_size);
		free(ptr);
		ptr = malloc(new_size);
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		_memcpy(ptr, arr, old_size);
	}
	return (ptr);
}

/**
 * _memcpy - function
 * @dest: destiny pntr
 * @src: source pntr
 * @n: n bytes
 * Return: pointer to memo
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
