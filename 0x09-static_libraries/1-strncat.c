#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a])
		a++;

	while (src[b] && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}

