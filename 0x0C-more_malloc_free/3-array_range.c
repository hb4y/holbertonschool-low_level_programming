#include "holberton.h"

/**
 * array_range - return array of int from min to max
 * @min: min number 
 * @max: max number
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);
	
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	
	return (arr);
}
