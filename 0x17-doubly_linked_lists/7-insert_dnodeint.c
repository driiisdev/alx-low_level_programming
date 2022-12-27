#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp_prev, *temp = *h;
	unsigned int i = 0;

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp)
	{
		if (idx == i)
		{
			temp->prev->next = new;
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			return (new);
		}
		temp_prev = temp;
		temp = temp->next;
		i++;
	}
	if (!temp && i == idx)
	{
		temp_prev->next = new;
		new->prev = temp_prev;
		return (new);
	}

	free(new);
	return (NULL);
}
