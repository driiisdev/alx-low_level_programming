#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: number (value)
 * @index: starting index (0)
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int hold;

if (index > 64)
{
return (-1);
}

hold = n >> index;

return (hold & 1);
}