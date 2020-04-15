#include "search_algos.h"

/**
 * print_array - print array in rage
 * @array: integer array
 * @head: head of the array or sub array
 * @tail: tail of the array or sub array
 * Return: Void
 */

void print_array(int *array, int head, int tail)
{
	int i;

	printf("Searching in array: ");

	if (head == tail)
	{
		printf("%d\n", *(array + head));
		return;
	}

	for (i = head; i < tail; i++)
		printf("%d, ", *(array + i));
	printf("%d\n", *(array + i));
}

/**
 * binary_search - binary search algo
 * @array: integer array* @array: integer array
 * @size: size of the array
 * @value: value to search for
 * Return: Index of the value in the array
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (*(array + mid) < value)
			left = mid + 1;
		else if (*(array + mid) > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
