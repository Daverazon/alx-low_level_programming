#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: address of pointer to first node in the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *node;

	if (head == NULL)
		return (NULL);

	node = *head;

	while (node && node->next)
		node = node->next;

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = node;

	if (*head == NULL) /*means we're adding the first node of a new linked list*/
		*head = newNode;

	if (node)
		node->next = newNode;

	return (newNode);
}
