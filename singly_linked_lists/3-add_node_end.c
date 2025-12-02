#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer to the pointer of the head of the list
 * @str: The string to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp; /* Variable temporaire pour parcourir la liste */
	unsigned int len = 0;

	/* Calcul de la longueur de la chaine */
	while (str[len])
		len++;

	/* 1. Allocation du nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	/* Important : comme c'est le dernier, son next est NULL */
	new_node->next = NULL;

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* 2. Cas particulier : La liste est vide */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* 3. Cas général : On parcourt jusqu'au dernier nœud */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* On attache le nouveau nœud à la fin */
	temp->next = new_node;

	return (new_node);
}
