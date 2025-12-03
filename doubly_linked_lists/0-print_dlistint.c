#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * This function traverses the list from the head to the tail, printing the
 * integer value (n) of each node.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *current = h;

    /* Traverse the list until the current pointer is NULL (end of list) */
    while (current != NULL)
    {
        /* Print the integer value of the current node */
        printf("%d\n", current->n);

        /* Increment the node count */
        count++;

        /* Move to the next node */
        current = current->next;
    }

    return (count);
}
