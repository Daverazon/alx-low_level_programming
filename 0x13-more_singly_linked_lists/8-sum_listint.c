/*
* Write a function that returns the sum of all the data (n) of a listint_t
* linked list.
* Prototype: int sum_listint(listint_t *head);
* if the list is empty, return 0
*/
#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
