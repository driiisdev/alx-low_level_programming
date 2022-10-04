#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicate a string given as parameter using malloc
 * @str: string to duplicate
 *
 * Return: NULL, if str = NULL
 */
char *_strdup(char *str)
{
char *S;
int i = 0;
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
for (i = 0; i < size; i++)
{
S[i] = str[i];
}
return (S);
}

}
