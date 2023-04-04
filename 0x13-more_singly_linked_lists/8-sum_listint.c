#include "lists.h"

/**
 * sum_listint - returns the sum of all data of a linked list
 * @head: points to the linked list
 *
 * Return: the sum of all data of the linked list or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (head)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
