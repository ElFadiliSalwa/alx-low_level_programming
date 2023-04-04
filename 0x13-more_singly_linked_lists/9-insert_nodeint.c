#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to a pointer
 * @idx: the index of the list
 * @n: the data
 *
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
		i++;
	}
	return (NULL);
}
