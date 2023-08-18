#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the character '\', ending with a newline.
 * @n: The number of times the character '\' should be printed.
 * Code - This code is written by Olujide Fawole
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n'); 
        return;
    }

    int spaces = 0; 

    while (spaces < n)
    {
        int i;
        for (i = 0; i < spaces; i++)
        {
            _putchar(' '); 
        }
        _putchar('\\'); 
        _putchar('\n'); 
        spaces++;
    }
}
