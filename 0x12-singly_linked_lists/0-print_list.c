#include "lists.h"

/**
 * print_list - print all element of a linked list
 * @h: head of the linked list
 *
 * Return: number of nodes of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%u] (%s)\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}