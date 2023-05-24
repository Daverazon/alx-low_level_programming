/*
* Write a function that prints all the elements of a listint_t list.
* Prototype: size_t print_listint(const listint_t *h);
* Return: the number of nodes
* Format: see example
* You are allowed to use printf
*/
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
