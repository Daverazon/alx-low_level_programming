#include "lists.h"
/**
 * sum_dlistint - sums all the data (n) of a doubly linked list
 * @head: pointer to first node in the list
 * Return: sum
 *         NULL if the list is empty
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
