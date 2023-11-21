#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to the address of the head of the list
 *
 * Return: the head node’s data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	return (data);
}
