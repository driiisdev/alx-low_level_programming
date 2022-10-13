#include "3-calc.h"
/**
 * op_add - addition operator
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: first number
 * @b: second number
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division operator
 * @a: first number
 * @b: second number
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
    printf("Error\n");
    exit(100);
}
return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @a: first number
 * @b: second number
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
    printf("Error\n");
    exit(100);
}
return (a % b);
}
