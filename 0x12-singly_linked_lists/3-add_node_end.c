#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: poiter to pointer to alist
 * @str: string
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp = *head;
	unsigned int n = 0;

	while (str[n])
		n++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;
	return (node);
}
