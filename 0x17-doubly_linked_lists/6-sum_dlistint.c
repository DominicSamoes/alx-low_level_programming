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
	int sum = 0;

	do {
		sum += head->n;
		head = head->next;
	} while (head);

	return (sum);
}
