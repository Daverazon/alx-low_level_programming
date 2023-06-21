#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at specified index of a
 * doubly linked list
 * @head: address of pointer the first node in the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded
 *        -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *findNode;

	if (!(head && *head))
		return (-1);
	findNode = *head;

	while (findNode && index--)
		findNode = findNode->next;
	if (!findNode)
		return (-1);
	if (findNode->prev)
		(findNode->prev)->next = findNode->next;
	else
		*head = findNode->next;
	if (findNode->next)
		(findNode->next)->prev = findNode->prev;
	free(findNode);
	return (1);
}
