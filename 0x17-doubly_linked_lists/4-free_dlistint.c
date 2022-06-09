#include "lists.h"

/**
 * free_dlistint - Frees a DLL.
 * @head: Pointer to a DLL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head, *next = NULL;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
