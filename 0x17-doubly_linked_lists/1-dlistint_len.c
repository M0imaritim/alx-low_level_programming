#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the hesd of list
 * Return: number of elementsin list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
