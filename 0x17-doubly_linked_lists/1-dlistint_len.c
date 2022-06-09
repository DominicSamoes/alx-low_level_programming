#include <stdlib.h>
#include "lists.h"

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: Doubly linked list to be counted
  *
  * Return: Number of elements in doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h != NULL) 
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
