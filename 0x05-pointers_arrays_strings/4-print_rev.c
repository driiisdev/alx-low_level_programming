#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i = 0;

while (i >= '\0')
{

if (s[i] == '\0')
{
break;
}
else
{
i++;
}

}

for (i--; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');

}
