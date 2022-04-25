#include "lists.h"

/**
 * print_listint - Prints all the elements of linked list
 * @h: Pointer to the head of the list
 * Return: The number of node
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *h = h;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
