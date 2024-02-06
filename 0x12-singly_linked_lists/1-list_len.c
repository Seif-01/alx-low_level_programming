#include "lists.h"

/**
 * list_len - finds the length of the list
 * @h: linked list
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
