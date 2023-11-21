#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the address of the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
