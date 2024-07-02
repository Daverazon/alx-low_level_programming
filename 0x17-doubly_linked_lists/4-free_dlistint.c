#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode;

	while (head)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}
