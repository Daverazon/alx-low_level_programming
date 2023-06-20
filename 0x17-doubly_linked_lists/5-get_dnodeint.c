#include "lists.h"
/**
 * get_dnodeint_at_index - finds the nth node of a doubly linked list
 * @head: pointer to first node of the list
 * @index: index of the node starting from zero
 * Return: pointer to the nth node
 *         NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index--)
		head = head->next;
	return (head);
}
