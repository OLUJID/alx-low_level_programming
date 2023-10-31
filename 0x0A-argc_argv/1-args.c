#include <stdio.h>

/**
 * main - print the argument number
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d/n", argc - 1);
	return (0);
}
