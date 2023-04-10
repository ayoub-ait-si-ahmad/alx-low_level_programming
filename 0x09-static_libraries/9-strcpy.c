#include "main.h"

/**
 * _strcpy - copies a string src to dest
 * @dest: string to copy to
 * @src: string to copy from
 * Return: dest the string the has src content
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

