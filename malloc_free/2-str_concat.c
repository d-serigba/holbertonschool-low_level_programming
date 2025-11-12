#include "main.h"
#include <stdlib.h>

/**
 * concat - coller deux chaîne de caractèredans dans un espace mémoire,
 * en utilisant malloc.
 * @s1 contenue de la chaîne a coller a s2.
 * @s2 contenue a coler suite a s1.
 *
 * Return: buffer ou NULL si ça fonctionne pas,
 * et la chaîne doit être traiter comme vide.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2;
	char *buffer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	buffer = malloc(sizeof(char) * (size1 + size2 + 1));
	if (buffer == NULL)
		return(NULL);

	for (i = 0; i < size1; i++)
		buffer[i] = s1[i];

	for (j = 0; j < size2; j++)
		buffer[i + j] = s2[j];

	buffer[i + j] = '\0';

	return(NULL);
}
