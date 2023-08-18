#include "main.h"

/**
 * _isupper - Check if a character is uppercase
 * @c: The character to be checked
 * Return: 1 if the character is uppercase, 0 otherwise
 * Written by: Fawole Olujide
 */

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return 1;
    }
        return 0;
    
}
