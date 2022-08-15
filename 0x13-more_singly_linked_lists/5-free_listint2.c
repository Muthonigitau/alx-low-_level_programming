#include "lists.h"

/**
 * free_listint2 - free listint_t
 * @head: pointer to head reference to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *current = *head;

	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
