#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int x;
	int y;
	int len;
	char tmp;

	x = 0;
	y = 0;
	while (s[x])
		x++;
	len = x - 1;
	while (y < x / 2)
	{
		tmp = s[y];
		s[y] = s[len];
		s[len] = tmp;
		len--;
		y++;
	}
}
