#include "lists.h"
/**
 * get_dnodeint_at_index - locates the nth node of a dlistint_t linked list
 * @head: pointer to head of the list
 * @index: index of node to be located
 * Return: address of the nth node, else NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int find = 0;

	while (head && find++ != index)
		head = head->next;

	return (head);
}
