#include "lists.h"
/**
 * print_listint - print all the elements of a listint_t list.
 * @h: pointer to strcutur listint_t
 * Return: the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t index = 0;

while (h)
{
printf("%d\n", h->n);
index++;
h = h->next;
}

return (index);
}
