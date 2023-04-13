#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of elements
 * @size: the size of each element
 * Return: if everything works ptr, NULL otherwise.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);

	char_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
