#include "lists.h"

/**
 * reverse_listint -reverse a linked list.
 * @heead:head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n;
	listint_t *p;

	n = NULL;
	p = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);


