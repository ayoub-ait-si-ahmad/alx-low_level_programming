#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int x = 'a';
	int w = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (w <= 'Z')
	{
		putchar(w);
		w++;
	}
	putchar('\n');
	return (0);
}
