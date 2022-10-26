#include "lists.h"
/**
 *print_listint - prints all the elements of a listint_t list
 *
 * @h: element
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	struct listint_s *head = NULL;
	struct listint_s *tail = NULL;

	head = (struct listint_s *)malloc(sizeof(struct listint_s));
	tail = (struct listint_s *)malloc(sizeof(struct listint_s));

	head->n = 4;
	head->next = tail;
	tail->n = 3;
	tail->next = NULL;

	printf("%d %d", head->n, tail->n);
}
