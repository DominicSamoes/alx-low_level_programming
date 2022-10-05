#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Doubly linked list to print
 *
 * Return: Number of nodes of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int leng = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++leng;
		h = h->next;
	}
	return (leng);
}
