#include "3-calc.h"
#include <stdlib.h>
#include <string.h>


/**
* get_op_func - ...
* @s: ...
*
* Return: ...
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}};
int i = 0;
while (i < 5)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}
return (0);
}

#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - Returns the sum of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Returns the difference of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Returns the product of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Returns the division of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Returns the remainder of the division of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}
