#include <stdio.h>

/**
 * main - main block
 * description: prints all numbers in base 16
 * Return: 0
 */
int main(void)
{
int n;
char ch;

for (n = 0; n < 10; n++)
{
putchar(n + '0');
}

for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}

putchar('\n');

return (0);

}
