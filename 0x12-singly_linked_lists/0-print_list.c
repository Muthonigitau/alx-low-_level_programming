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
	const list_t *current_node = h;

	while (current_node)
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", current_node->len, current_node->str);
		count++;
		current_node = current_node->next;
	}
	return (count);
}
