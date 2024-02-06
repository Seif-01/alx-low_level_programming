#include "lists.h"
#include <string.h>
/**
 * add_node - add a node to the beginnig of the list
 * @head: linked list
 * @str: string to be listed
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	length = 0;
	while (str[length])
	{
		length++;
	}
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
