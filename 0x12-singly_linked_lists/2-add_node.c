/*
* Write a function that adds a new node at the beginning of a list_t list.
* Prototype: list_t *add_node(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup
*/
#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *backNode = malloc(sizeof(list_t));

	if (!backNode)
		return (NULL);
	backNode->next = *head;
	*head = backNode;
	backNode->str = strdup(str);
	if (!(backNode->str))
		return (NULL);
	backNode->len = strlen(str);
	return (backNode);
}
