#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return:pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
int i, j;
int len = 0;
int index = 0;
char *str;

if (ac <= 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}

str = (char *)malloc(sizeof(char) * (len + 1));

if (str == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[index] = av[i][j];
index++;
}
str[index] = '\n';
index++;
}

return (str);
}
