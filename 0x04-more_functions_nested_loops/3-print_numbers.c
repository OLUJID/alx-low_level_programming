#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 * Code - Written by Olujide Fawole/
void print_numbers(void)
{
    char digit = '0'; /* Initialize with the character '0'*/

    while (digit <= '9') /* Loop from '0' to '9' */
    {
        _putchar(digit); /* Print the current digit */
        digit++; /* Move to the next character ('1', '2', ...)*/
    }

    _putchar('\n'); /* Print a newline character after printing digits */

}
