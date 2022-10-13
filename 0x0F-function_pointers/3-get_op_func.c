#include "3-calc.h"
/**
 * get_op_func - selects the correct operation function
 * @s: the operator given by the user
 *
 * Return: pointer to the correct function
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i;
i = 0;

while (ops[i].op)
{
if (ops[i].op[0] == s[0])
{
break;
}
i++;
}

return (ops[i].f);
}
