#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: NULL if str is NULL, or if insufficient memory was available.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	dup_str[i] = str[i];

	return (dup_str);
}
