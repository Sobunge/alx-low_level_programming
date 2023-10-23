#include "listint_t.h"  /* Header file where listint_t is defined */

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);  /* Allocation failed */

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return (new_node);
}
