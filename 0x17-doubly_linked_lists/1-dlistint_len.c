#include "lists.h"
/**
 * dlistint_len - counts number of elements in a doubly linked list
 * @h: pointer to start of the list
 * Return: number of linked elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
