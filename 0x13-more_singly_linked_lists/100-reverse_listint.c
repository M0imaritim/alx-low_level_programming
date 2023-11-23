#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the address of the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next_node;
	}

	*head = prev;

	return (*head);
}
