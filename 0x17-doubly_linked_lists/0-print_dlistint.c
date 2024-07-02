#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlisint_t list
 * @h: pointer to head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (node != NULL)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
