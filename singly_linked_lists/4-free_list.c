#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* 1. On sauvegarde l'adresse du prochain nœud */
		temp = head->next;

		/* 2. On libère la chaine de caractères (allouée par strdup) */
		free(head->str);

		/* 3. On libère le nœud lui-même */
		free(head);

		/* 4. On passe au suivant grâce à la sauvegarde */
		head = temp;
	}
}
