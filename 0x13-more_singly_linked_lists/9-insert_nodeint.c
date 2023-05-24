/*
* Write a function that inserts a new node at a given position.
* where idx is the index of the list where the new node should be added. Index
* starts at 0
* Returns: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx, do not add the new
* node and return NULL
*/
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *indexNode;/*initialize with start of list when sure head != NULL*/
	listint_t *beforeIndex;/*need node before index to hold address of next node*/
	listint_t *newNode;/*allocate memory when sure node can be inserted*/

	if (!head)
		return (NULL);
	indexNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (indexNode && idx--)
	{
		beforeIndex = indexNode;
		indexNode = indexNode->next;
	}
	if (!indexNode && idx > 0)
	{
		free(newNode);
		return (NULL);
	}

	beforeIndex->next = newNode;
	newNode->next = indexNode;
	return (newNode);
}
