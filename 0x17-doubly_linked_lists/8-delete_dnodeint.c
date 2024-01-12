#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at given index
 * @head: pointer to the head of list
 * @index: position of node to be deleted
 * Return: 1 if succesful -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *delnode;
	unsigned int i;

	if (!current)
		return (-1);
	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				delnode->next = current->next;
					if (current->next)
						current->next->prev = delnode;
			}
			free(current);
			return (1);
		}
		delnode = current;
		current = current->next;
		i++;
	}
	return (-1);
}
