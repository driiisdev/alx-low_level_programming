#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * @c: You can only use _putchar twice
 */
void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}

_putchar('\n');

}
