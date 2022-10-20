#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;
	while (h != NULL)
	{
		for (i = 0; h; i++)
		{
			printf("%d", h->n);
			h = h->next;
		}
	}
	return (i);
}
