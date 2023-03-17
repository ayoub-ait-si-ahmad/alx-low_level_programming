#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int character = 'z';

	for (character = 'z'; character <= 'a' ; character--)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}

