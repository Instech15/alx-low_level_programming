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
	char *dup;
	list_t *new;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (*head);
	}
}
