#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i = 0;

tmp = h;

while (tmp)
{
if (!tmp->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", tmp->len, tmp->str);
}

tmp = tmp->next;
i++;
}

return (i);
}
