#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of list
 * @head: pointer to the head of list
 * @n: element to be added
 * Return: address of the new element  or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->prev = last;
	}
	return (new);

}
