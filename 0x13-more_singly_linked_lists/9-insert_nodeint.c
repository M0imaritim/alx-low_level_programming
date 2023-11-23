#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a new node at a specified index in a
 * listint_t linked list
 * @head: pointer to the address of the head of the list
 * @idx: index where the new node should be added
 * @n: integer value to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
