/*
* Write a function that prints all the elements of a list_t list.
* Prototype: size_t print_list(const list_t *h);
* Return: the number of hs
* If str is NULL, print [0] (nil)
* You are allowed to use printf
*/
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of hs in h.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
