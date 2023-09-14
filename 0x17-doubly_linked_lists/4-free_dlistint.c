#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prevNode;

	while (head)
	{
		prevNode = head;
		head = head->next;
		free(prevNode);
	}
}
