#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: points to a pointer to the linked list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;

	return (n);
}
