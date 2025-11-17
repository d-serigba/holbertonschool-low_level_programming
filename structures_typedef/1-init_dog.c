#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialise une variable de type structure chien
 * @d: pointeur de la structure chien à initialiser
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Description: Initialise le nom, l'âge et le propriétaire
 * d'une structure de type dog. Si d est NULL, la fonction ne fait rien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
