#include "holberton.h"

/**
 * alloc_grid - function
 * @width: w
 * @height: h
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		arr[i] = (int *) malloc(height * sizeof(int));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
