#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the address of the head of the list
 * @n: integer value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
