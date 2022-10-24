#include "lists.h"
/**
 * listint_len - print all the elements of a listint_t list.
 * @h: pointer to strcutur listint_t
 * Return: the numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t index = 0;

while (h)
{
index++;
h = h->next;
}

return (index);
}
