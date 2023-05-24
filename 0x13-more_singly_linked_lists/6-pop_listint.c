/*
* Write a function that deletes the head node of a listint_t linked list, and
* returns the head node’s data (n).
* Prototype: int pop_listint(listint_t **head);
* if the linked list is empty return 0
*/
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *pop;

	if (head && *head)
	{
		n = (*head)->n;
		pop = *head;
		*head = (*head)->next;
		free(pop);
	}

	return (n);
}
