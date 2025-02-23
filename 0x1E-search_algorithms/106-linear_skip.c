#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev, *current;

    if (!list)
        return NULL;

    /* Move in the express lane first */
    prev = list;
    current = list->express;

    while (current && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        prev = current;
        current = current->express;
    }

    /* Found range where value might be */
    if (current)
        printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    else
    {
        /* Find the last node */
        current = prev;
        while (current->next)
            current = current->next;
        printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    }

    /* Perform normal linear search in the found range */
    while (prev && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }

    return NULL;
}
