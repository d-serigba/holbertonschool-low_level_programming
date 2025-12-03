#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list node
 * @n: integer data stored in the node
 * @prev: pointer to the previous node in the list
 * @next: pointer to the next node in the list
 *
 * Description: doubly linked list node structure for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototype */
size_t print_dlistint(const dlistint_t *h);

#endif
