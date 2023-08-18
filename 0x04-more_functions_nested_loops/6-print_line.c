#include "main.h"

/**
 * print_line - Draws a straight line using the character '_', ending with a newline.
 * @n: The number of times the character '_' should be printed.
 * Code - This code is written by Olujide Fawole
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    while (n > 0)
    {
        _putchar('_');
        n--;
    }

    _putchar('\n'); 
}
