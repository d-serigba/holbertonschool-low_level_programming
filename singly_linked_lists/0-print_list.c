#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	/* On boucle tant que le pointeur h n'est pas NULL */
	while (h != NULL)
	{
		/* Vérification si la chaine est NULL selon la consigne */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		/* On incrémente le compteur de nœuds */
		nodes++;

		/* On avance au nœud suivant */
		h = h->next;
	}

	return (nodes);
}
