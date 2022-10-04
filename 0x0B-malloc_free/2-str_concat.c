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

if (s1 == NULL)
{
s1 = "";
}
else
{
while (s1[len1] != '\0')
{
len1++;
}
len1++;
}

if (s2 == NULL)
{
s2 = "";
}
else
{
while (s2[len2] != '\0')
{
len2++;
}
len2 ++;
}

S = (char *)malloc(sizeof(char) * (len1 + len2));

while (s1[i] != '\0')
{
S[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
S[i + j] = s2[i + j];
j++;
}

return(S);

}
