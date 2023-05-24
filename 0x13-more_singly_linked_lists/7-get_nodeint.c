/*
* Write a function that returns the nth node of a listint_t linked list.
* where index is the index of the node, starting at 0
* if the node does not exist, return NULL
*/
#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodeFind = head;

	while (nodeFind && index--)
		nodeFind = nodeFind->next;
	if (nodeFind)
		return (nodeFind);
	return (nodeFind);
}
