#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the starting value "included"
 * @max: the last value "excluded"
 * Return: a pointer to array, NULL otherwise
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;


	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (!array)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = min + i;

	return (array);
}
