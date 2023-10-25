#include "main.h"

/**
 * _memset - entry point
 * @s: pointed destination
 * @n: bytes
 * @b: constant byte
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n) 
{
	unsigned int i;
	for (i = 0; i < n; i++) 
	{
		s[i] = b;
	}
	return s;
}
