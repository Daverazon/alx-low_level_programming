#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: address of the pointer to the head of the list
 * @n: a number that should be the list element
 * Return: the address of the new element
 *         NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		printf("efgh");

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		printf("abcd");
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	head = &newNode;

	if (!newNode)
		printf("fds");
	return (newNode);
}

