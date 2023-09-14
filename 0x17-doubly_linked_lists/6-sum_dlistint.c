#include "lists.h"
/**
 * sum_dlistint - calculates sum of all data in a dlistint_t linked list
 * @head: pointer to head of linked list
 * Return: sum, else 0 if list is empty
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
