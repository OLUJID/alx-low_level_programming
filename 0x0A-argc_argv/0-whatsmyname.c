#include <stdio.h>
#include "main.h"
/**
 *main - print the name of the program
 *@argc: it represents the argument counts
 *@argv: it represents the argument vectors
 *Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	(void) argc;

	printf("%s/n", argv[0]);
	return (0);
}

