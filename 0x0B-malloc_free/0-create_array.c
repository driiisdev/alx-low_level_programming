#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: specific char to initialize
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *A = (char *)malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}
else
{
while (i < size)
{
A[i] = c;
i++;
}
A[i] = '\0';
return (A);
}

}
