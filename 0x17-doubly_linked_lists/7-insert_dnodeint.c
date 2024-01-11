#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the header of list
 * @idx: index where new node is to be placed
 * @n: node data
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new;
		new->next = *h;
		*h = new;
	}

	while (i < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next == new)
		tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
