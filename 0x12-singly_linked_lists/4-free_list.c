#include "lists.h"

/**
 * free_list - free list
 * @head: linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head->next)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
