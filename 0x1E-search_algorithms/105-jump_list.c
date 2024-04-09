#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (list == NULL || size == 0)
        return (NULL);

    size_t jump = sqrt(size);
    listint_t *prev = NULL, *current = list;

    while (current->next != NULL && current->n < value)
    {
        prev = current;
        for (size_t i = 0; i < jump && current->next != NULL; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n >= value || current->next == NULL)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    while (prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}

