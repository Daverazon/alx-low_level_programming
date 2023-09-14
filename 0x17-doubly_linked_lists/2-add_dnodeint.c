#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: address of pointer to head of list
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (!head)
		return (newNode);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (newNode);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev  = NULL;

	if (*head)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
