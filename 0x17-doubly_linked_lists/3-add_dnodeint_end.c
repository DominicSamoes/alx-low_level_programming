#include "lists.h"


static dlistint_t *new_node(const int n);

/**
 * add_dnodeint_end - Add a new node to the end of a linked DLL
 * @head: Pointer to a pointer of a DLL
 * @n: Value to set the new node to
 *
 * Return: Pointer to the new node added.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *newnode;

	if (*head)
	{
		node = *head;
		while (node->next)
			node = node->next;
		newnode = new_node(n);
		if (!newnode)
			return (NULL);
		node->next = newnode;
		node->next->prev = node;
	} else
	{
		node = new_node(n);
		if (!node)
			return (NULL);
		*head = node;
	}
	return (node);
}

/**
 * new_node - Create a new node and set it to value given.
 * @n: Value to set the new node to
 *
 * Return: Pointer to a new node.
 */
static dlistint_t *new_node(const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
