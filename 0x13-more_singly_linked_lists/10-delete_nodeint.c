/*
* Write a function to deletes node at index index of a listint_t linked list.
* Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
* where index is the index of the node to be deleted. Index starts at 0
* Returns: 1 if it succeeded, -1 if it failed
*/
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *beforeIndex;
	listint_t *indexNode;

	if (!head || !*head)
		return (-1);
	indexNode = *head;
	if (index == 0)
	{
		*head = indexNode->next;
		free(indexNode);
		return (1);
	}
	while (indexNode && index--)
	{
		beforeIndex = indexNode;
		indexNode = indexNode->next;
	}
	if (!indexNode)
		return (-1);
	beforeIndex->next = indexNode->next;
	free(indexNode);
	return (1);
}
