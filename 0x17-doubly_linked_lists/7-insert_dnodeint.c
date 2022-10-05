#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node in DLL.
 * @h: Pointer to head of DLL.
 * @idx: Position to insert new node.
 * @n: Integer to be inputted.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
