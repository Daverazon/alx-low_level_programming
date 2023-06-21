#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of the pointer to the first node
 * @idx: index (starts at 0) of list where new node should be added
 * @n: data in the list
 * Return: address of the new node
 *         NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *findNode, *prevNode = NULL;

	if (!h)
		return (NULL);
	findNode = *h;
	while (findNode && idx)
	{
		prevNode = findNode;
		findNode = findNode->next;
		idx--;
	}
	if (idx > 0)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = prevNode;
	newNode->next = findNode;

	if (findNode)
		findNode->prev = newNode;
	if (prevNode)
		prevNode->next = newNode;
	else
		*h = newNode;
	return (newNode);
}
