#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: points to the list
 * @n: the element of a node to be added
 *
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
