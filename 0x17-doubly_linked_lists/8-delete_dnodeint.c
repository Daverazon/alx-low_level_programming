#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at the
 * specified index of a linked list
 * @head: address of pointer to the head of a linked list
 * @index:  index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *findNode, *prevNode = NULL;
	unsigned int find = 0;

	if (!head)
		return (-1);

	findNode = *head;
	while (findNode && find != index)
	{
		prevNode = findNode;
		findNode = findNode->next;
		find++;
	}

	if (!findNode)
		return (-1);

	if (prevNode)
		prevNode->next = findNode->next;
	if (findNode->next)
		(findNode->next)->prev = prevNode;
	if (find == 0)
		*head = findNode->next;

	free(findNode);

	return (1);
}
