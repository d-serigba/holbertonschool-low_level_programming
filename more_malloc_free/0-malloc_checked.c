#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 * If malloc fails, the function terminates with status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (p == NULL)
		exit(98);

	return (ptr);
}

