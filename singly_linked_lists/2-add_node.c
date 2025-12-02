#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A pointer to the pointer of the head of the list
 * @str: The string to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	/* Calcul de la longueur de la chaine */
	while (str[len])
		len++;

	/* 1. Allocation de mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* 2. Duplication de la chaine et assignation de la longueur */
	new_node->str = strdup(str);
	new_node->len = len;

	/* Vérification si strdup a échoué */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* 3. Mise en place des liens (Insertion en tête) */
	/* Le next du nouveau nœud pointe vers l'ancienne tête */
	new_node->next = *head;

	/* La tête pointe maintenant vers le nouveau nœud */
	*head = new_node;

	return (new_node);
}
