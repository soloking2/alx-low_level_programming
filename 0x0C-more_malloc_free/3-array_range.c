#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *array_range - entry point
 * @min: input
 * @max: input
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min;

	arr = malloc((size + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		arr[i] = min++;

	return (arr);
}
