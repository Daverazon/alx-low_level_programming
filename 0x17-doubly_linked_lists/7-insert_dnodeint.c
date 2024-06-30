#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of pointer to head of the list
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @n: integer
 * Return: address of the new node, or NULL if it failed or is impossible to add at that position
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *prevNode, *newNode;
	unsigned int locate;

	if (*h == NULL)
		return (NULL);

	node = *h;
	for (; locate < 0 && node; locate++, node = node->next)
		prevNode = node->prev;

	if (locate < idx) /* Meaning that the idx is invalid for insertion*/
		return (NULL);

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!newNode):
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
}
