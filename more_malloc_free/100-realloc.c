#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: new size of memory block
 *
 * Return: pointer to newly allocated memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i;

	/* Case 1: same size, do nothing */
	if (new_size == old_size)
		return (ptr);

	/* Case 2: new_size == 0 and ptr already exists → free and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Case 3: ptr is NULL → equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* General case: allocate new block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy old data up to min(old_size, new_size) */
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr);

	return (new_ptr);
}
