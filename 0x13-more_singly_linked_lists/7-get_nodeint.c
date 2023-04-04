#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: linked list
 * @index: the index of the node
 *
 * Return: the nth node of the linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (NULL);
	else
		return (tmp);
}
