#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char c
 * @size: the size of the memory to allocate
 * @c: the char to intialize array with
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (!size || !arr)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
