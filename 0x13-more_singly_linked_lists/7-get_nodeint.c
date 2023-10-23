#include "listint_t.h"  /* Header file where listint_t is defined */

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node, starting at 0.
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);  /* Node at the specified index does not exist */
}