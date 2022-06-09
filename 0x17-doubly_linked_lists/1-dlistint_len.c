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
	int leng = 0;

	do {
		++leng;
		h = h->next;
	} while (h != NULL);

	return (leng);
}
