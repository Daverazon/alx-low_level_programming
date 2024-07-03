#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of pointer to head of the list
 * @idx: index of the list where new node should be added. Index starts at 0
 * @n: integer
 * Return: address of the new node,
 *         or NULL if it failed or is impossible to add at that position
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prevNode = NULL, *newNode, *node;
	unsigned int locate = 0;

	if (h == NULL)
		return (NULL);
	node = *h;
	for (; locate < idx && node; locate++, node = node->next)
		prevNode = node;
	if (locate != idx)
	/*idx invalid for insertion otherwise we are at the idx for insertion*/
		return (NULL);
	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = prevNode;
	newNode->next = node;
	if (idx == 0)
	/*Inserting at the beginning of a list*/
		*h = newNode;
	if (node != NULL)
	/*Not inserting into an empty list or after the last node in a list*/
		node->prev = newNode;
	if (prevNode != NULL)
	/*Not inserting into an empty list or at the beginning of a list*/
		prevNode->next = newNode;

	return (newNode);
}
