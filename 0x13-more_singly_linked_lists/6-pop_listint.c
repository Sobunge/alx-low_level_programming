#include "listint_t.h"  /* Header file where listint_t is defined */

/**
 * pop_listint - Deletes the head node of a listint_t list and returns its data.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);  /* List is empty */

	int data = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
