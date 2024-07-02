#include "lists.h"
/**
 * dlistint_len - computes the number of elements (nodes) in a linked list
 * @h: pointer to head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
