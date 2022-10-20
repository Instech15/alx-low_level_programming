#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	while (i != NULL)
	{
		printf(" %d ", h->data);
		h = h->next;
	}
	return (0);
}
