#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 *
 * Return: NULL, if str = NULL
 */
char *_strdup(char *str)
{
char *S;
int size = 0;

if (str == NULL)
{
return (NULL);
}
else
{
while (str[size] != '\0')
{
size++;
}

S = (char *)malloc(size * sizeof(char));
}

if (S == NULL)
{
return (NULL);
}
else
{
for (int i = 0; i < size; i++)
{
S = str[i];
}
return (S);
}

}
