#include <stdio.h>
/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: 0
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{

if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
if (i == 100)
printf("Buzz");
else
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}

}
printf("\n");

return (0);
}