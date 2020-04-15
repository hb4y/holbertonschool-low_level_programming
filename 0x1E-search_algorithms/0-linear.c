#include "search_algos.h"

/**
 * linear_search - Implement linear search
 * @array: integer array
 * @size: size of the array
 * @value: value to search for
 * Return: Index of the value in the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (*(array + i) != value)
			printf("Value checked array[%d] = [%d]\n", (int) i, *(array + i));
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int) i, *(array + i));
			return (i);
		}
	}

	return (-1);

}
