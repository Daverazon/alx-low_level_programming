#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: address of pointer to head of the list
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *endNode;

	if (!head)
		return (newNode);

	endNode = *head;
	while (endNode && endNode->next)
		endNode = endNode->next;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (newNode);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = endNode;

	if (endNode)
		endNode->next = newNode;
	else
		*head = newNode;

	return (newNode);
}
