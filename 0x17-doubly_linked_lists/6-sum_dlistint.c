#include "lists.h"

/**
 * sum_dlistint - Sum all the data of a DLL.
 * @head: Pointer to head of DLL.
 *
 * Return: Sum of all the nodes.
 * 0 If empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head)
	{
		do {
			sum += node->n;
			node = node->next;
		} while (node != NULL);
	}
	return (sum);
}
