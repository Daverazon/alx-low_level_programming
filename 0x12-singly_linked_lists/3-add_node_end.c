/*
* Write a function that adds a new node at the end of a list_t list.
* Prototype: list_t *add_node_end(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup
*/
#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *lastNode = *head;

	if (!newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->str = strdup(str);
	if (newNode->str == NULL)
		return (NULL);
	newNode->len = strlen(str);
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (lastNode->next)
		lastNode = lastNode->next;
	lastNode->next = newNode;

	return (newNode);
}
