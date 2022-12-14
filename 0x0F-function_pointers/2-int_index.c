#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: first index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}

return (-1);
}
