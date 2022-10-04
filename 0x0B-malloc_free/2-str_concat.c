#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *S;
int i = 0;
int j = 0;
int len1 = 0;
int len2 = 0;

while (s1 != '\0' && s1[len1])
{
len1++;
}

while (s2 != '\0' && s2[len2])
{
len2++;
}

S = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

if (S == NULL)
{
return (NULL);
}

while (i < len1)
{
S[i] = s1[i];
i++;
}

while (j < len2)
{
S[i + j] = s2[i + j];
j++;
}

S[i + j] = '\0';

return (S);
}
