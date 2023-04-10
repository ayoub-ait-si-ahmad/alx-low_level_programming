#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a])
		a++;

	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}

