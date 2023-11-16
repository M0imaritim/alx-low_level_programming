#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements  in a linked list
 * @h: pointer to the header of file
 * Return: number of elements
 *
 */
size_t list_len(const list_t *h)
{
	size_t n_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		n_elements++;
	}
	return (n_elements);
}
