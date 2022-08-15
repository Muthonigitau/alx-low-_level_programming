#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: head ref
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNode = *head;
	listint_t *currentNode = *head;
	listint_t *prevNode = NULL;

	while (currentNode)
	{
		nextNode = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}
	*head = prevNode;
	return (*head);
}
