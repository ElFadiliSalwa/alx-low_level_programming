#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: points to the list
 * @n: the node's element to be added
 *
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
