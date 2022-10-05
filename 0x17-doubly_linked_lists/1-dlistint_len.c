#include <stdlib.h>
#include "lists.h"

/**
  * dlistint_len - Count the number of elements in a DLL
  * @h: Pointer to head of DLL
  *
  * Return: Number of elements in the DLL
  */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		++nodes;
		h = h->next;
	}

	return (nodes);
}
