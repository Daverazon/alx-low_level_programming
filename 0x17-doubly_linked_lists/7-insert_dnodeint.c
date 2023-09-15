#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of pointer to head of linked list
 * @idx: index of the list where the new node should be added
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *findNode, *prevNode = NULL, *newNode;
	unsigned int find = 0;

	if (!h)
		return (NULL);

	findNode = *h;
	while (findNode && find != idx)
	{
		prevNode = findNode;
		findNode = findNode->next;
		find++;
	}

	if (!findNode && find != idx)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = prevNode;
	newNode->next = findNode;
	if (prevNode)
		prevNode->next = newNode;
	if (findNode)
		findNode->prev = newNode;

	/*inserting at head*/
	if (find == 0)
		*h = newNode;

	return (newNode);
}
