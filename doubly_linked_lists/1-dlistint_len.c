#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: A pointer to the head of the dlistint_t list.
 *
 * This function traverses the list from the head to the tail, incrementing
 * a counter for each node encountered.
 *
 * Return: The number of nodes in the list (type size_t).
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *current = h;

    /* Iterate through the list until the end (NULL) is reached */
    while (current != NULL)
    {
        /* Increment the counter for the current node */
        count++;

        /* Move to the next node */
        current = current->next;
    }

    return (count);
}
