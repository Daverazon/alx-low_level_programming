/*
* Write a function that adds a new node at the end of a listint_t list.
* Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed
*/
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	lastNode = *head;
	while (lastNode->next)
		lastNode = lastNode->next;
	lastNode->next = newNode;

	return (newNode);
}
