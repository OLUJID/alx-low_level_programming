#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the character '\', ending with a newline.
 * @n: The number of times the character '\' should be printed.
 * Code - This code is written by Olujide Fawole
 */
void print_diagonal(int n)
{
  int x, y;
  if (n<=0)
  {
	  _putchar ('\n');
  }
  else
  {
	  for (x = 0; x < n; x++)
	  {
		  for (y = 0; y < x; y++)
		  {
			  _putchar (32)
		  }
		  _putchar (92)
			  _putchar ('\n')
	  }
  }

}
