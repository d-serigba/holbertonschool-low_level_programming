#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/* On parcourt la liste tant que le pointeur h n'est pas NULL */
	while (h != NULL)
	{
		/* On incrémente le compteur pour chaque nœud trouvé */
		count++;

		/* On passe au nœud suivant */
		h = h->next;
	}

	return (count);
}
