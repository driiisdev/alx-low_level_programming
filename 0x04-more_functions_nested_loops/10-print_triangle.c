#include "main.h"
/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: Size of triangle
 */
void print_triangle(int size)
{
int row, column;

if (size <= 0)
{
_putchar('\n');
}

for (row = 0; row < size; row++)
{

for (column = 0; column < size; column++)
{

if (column + 1 >= size - row)
{
_putchar('#');
}
else
{
_putchar(' ');
}

}

_putchar('\n');

}

}
