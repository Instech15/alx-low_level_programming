#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @str: string to be added
 * @head: head of the list
 *
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	new = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = str;
	new->next = *head;
	*head = new;
		return (*head);
}
