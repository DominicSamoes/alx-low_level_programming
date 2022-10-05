#include "lists.h"

/**
 * get_dnodeint_at_index - Find node in a DLL.
 * @head: Pointer to head of DLL.
 * @index: Node to locate.
 *
 * Return: If node does not exist - NULL.
 *         Otherwise address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}

	return (head);
}
