#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: count the number of argruments.
 * @argv: Pinter to the string of arguments.
 * Return: 0.
*/

int main(int  argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}

