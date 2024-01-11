#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head of DLL
 * @index: index from which node should be returned
 * Return: node or Null if it doesn't exist
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (Null);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (head)
		return (head);
	else
		return (NULL);
}
