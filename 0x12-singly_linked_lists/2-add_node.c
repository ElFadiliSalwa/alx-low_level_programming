#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to pointer to a linked list
 * @str: string
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int n = 0;
	list_t list;

	while (str[n])
		n++;

	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->len = n;
	list->next = *head;
	*head = list;
	return (list);
}
