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
int len = 0;

if (str == NULL)
{
return (NULL);
}
else
{
while (str[len] != '\0')
{
len++;
}
S = (char *)malloc(sizeof(char) * (len + 1));
}

if (S == NULL)
{
return (NULL);
}
else
{
while (str[i] != '\0')
{
S[i] = str[i];
i++;
}
return (S);
}

}
