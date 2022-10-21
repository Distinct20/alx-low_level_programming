#include "lists.h"

/**
 * list_len - Returns the number of elements in a list.
 * @h: singly linked list.
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t number of nodes;
        number_of_nodes= 0;
	while (h !=NULL)
	{
		h = h->next;
		number_of_nodes++;
	}

	return (nodes);
}
