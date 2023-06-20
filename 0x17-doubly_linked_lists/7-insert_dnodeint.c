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
	dlistint_t *newNode, *prevNode = NULL;

	if (!h)
		return (NULL);
	while (*h && idx--)
	{
		prevNode = *h;
		*h = (*h)->next;
	}
	/*sets *h to the index we're looking for*/

	if (!*h && idx != 0)
		return (NULL);
	/*checks if the idx is out of range*/

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *h;
	newNode->prev = prevNode;
	if (prevNode)
		prevNode->next = newNode;
	else
		*h = newNode;
	/*
	 * checks if insertion is at the beginning of an empty list
	 * if avoids dereferencing a null pointer
	 * else sets the new node as the head
	 */

	if (!*h)
		(*h)->prev = newNode;
	/*
	 * checks if insertion is at the end list to avoid dereferencing a
	 * null pointer
	 */
	return (newNode);
	}
