#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: count the number of argruments.
 * @argv: Pinter to the string of arguments.
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);
}

