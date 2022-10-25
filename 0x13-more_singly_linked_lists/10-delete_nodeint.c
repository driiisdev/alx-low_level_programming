#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at certain index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}

while (i < index - 1)
{
if (!tmp || !(tmp->next))
return (-1);
tmp = tmp->next;
i++;
}

current = tmp->next;
tmp->next = current->next;
free(current);

return (1);
}
