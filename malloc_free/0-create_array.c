#include "main.h"
#include <stdlib.h>

/** create_array - créé un tableau de caractère
 * @c: initialisation du tableau
 * @size: taille du tableau à alouer 
 * Return: pointeur vers le tableau NULL if dize = 0 ou si cela echoue
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);
		if (buffer == NULL)
			return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;	

	return(buffer);
}
