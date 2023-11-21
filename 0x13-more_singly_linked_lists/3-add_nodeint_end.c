#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of the lst
 * @n: integer value to be stored int the new node
 * Return: the address of the new element or NULL if it fails
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *node;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		node = *head;

		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = newnode;
	}
	return (newnode);
}
