#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the first element in the linked list
 * Return: the head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int num;

if (!head || !*head)
{
return (0);
}

num = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;

return (num);
}
