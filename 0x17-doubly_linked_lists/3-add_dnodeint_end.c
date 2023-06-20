#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to address of pointer to head node
 * @n: number to be stored in the node
 * Return: the address of the new element
 *          NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	/*if head is null, the list is empty, so make the new node the head*/
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		newNode->prev = temp;
		temp->next = newNode;
	}
	return (newNode);
}
