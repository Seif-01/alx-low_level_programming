#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node to the end of the list
 * @head: linked list
 * @str: string to copy
 * Return: returns the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	int length;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	last = *head;

	length = 0;
	while (str[length])
		length++;
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
