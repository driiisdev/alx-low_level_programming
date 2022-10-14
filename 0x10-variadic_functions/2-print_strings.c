#include "variadic_functions.h"
/**
 * print_strings - print a string
 * @separator: seperator between strings
 * @n: number of args passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
char *str;

va_start(ap, n);

for (i = 0; i < n; i++)
{
str = va_arg(ap, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");

va_end(ap);
}
