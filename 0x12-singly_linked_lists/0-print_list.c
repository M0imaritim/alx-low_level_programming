#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", (h != NULL && h->str != NULL) ?
		       h->len : 0, (h != NULL && h->str != NULL) ?
		       h->str : "(nil)");
		h = h->next;
		node_count++;
	}

	return (node_count);
}
