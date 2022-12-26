#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, 0 if not.
 * @c: The character in ASCII code
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{

if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}

}
