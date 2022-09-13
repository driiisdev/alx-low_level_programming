#include <stdio.h>

/**
 * main - main block
 * description: prints alphabet (a-z) excepts 'q' and 'e'
 * Return: 0
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{

if (ch != 'q' && ch != 'e')
{
putchar(ch);
}

ch++;

}

putchar('\n');

return (0);

}
