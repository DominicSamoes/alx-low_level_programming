#include "lists.h"


static dlistint_t *new_node(dlistint_t **head, const int n);

/**
 * add_dnodeint - Add a new node at the start of a DLL
 * @head: Pointer to a pointer of a DLL
 * @n: Value to set the node to.
 *
 * Return: Pointer to the new node created.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = new_node(head, n);
	if (!node)
		return (NULL);
	*head = node;
	return (node);
}

/**
 * new_node - Create a new node
 * @head: Pointer to a pointer of a DLL.
 * @n: Value to set the new node to.
 *
 * Return: Pointer to a new node on Success else NULL.
 */
static dlistint_t *new_node(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head)
	{
		node->next = *head;
		(*head)->prev = node;
	}

	return (node);
}
