#include "lists.h"

/**
 * free_dlistint - Frees a DLL.
 * @head: Pointer to a DLL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	do {
		temp = head->next;
		free(head);
		head = temp;
	} while (head);
}
