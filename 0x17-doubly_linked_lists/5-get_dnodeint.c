#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to head of the list
 * @index: index of the node, starting from 0
 * Return: the node, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int locate = 0;

	for (; head && locate < index; locate++)
		head = head->next;

	return (head);
}
