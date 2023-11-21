#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees listint_t list
 * @head: pointer to the head of the list
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
