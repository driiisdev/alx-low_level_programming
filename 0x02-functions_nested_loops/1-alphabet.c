#include "main.h"
#include "_putchar.c"
/**
 * main - print_alphabet block
 * description: Print alphabet in lowercase using only `_putchar`
 * Return: void
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
