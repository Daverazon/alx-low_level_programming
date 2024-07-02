#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all data (n) of a doubly linked list
 * @head: pointer to head of the list
 * Return: the sum, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
