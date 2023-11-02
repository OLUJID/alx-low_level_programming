#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Allocate two strings
 * @s1: The first string to allocate
 * @s2: the second string to allocate
 *
 * Return: the two strings allocated
 */

char *str_concat(char *s1, char *s2)
{ int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[k];
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
