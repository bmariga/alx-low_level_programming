#include "lists.h"

/**
 * print_listint - prints all the elements in the list.
 * @h: head of the list.
 *
 * Return: numbers of the nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
