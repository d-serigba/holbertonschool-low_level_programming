#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Alloue de la mémoire avec malloc
 * @b: Nombre d’octets à allouer
 *
 * Return: Pointeur vers la mémoire allouée
 * Si malloc échoue, termine le programme avec un statut 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
        exit(98);

    return ptr;
}

int main(void)
{
    int *arr;
    int i;

    arr = malloc_checked(5 * sizeof(int));

    for (i = 0; i < 5; i++)
        arr[i] = i + 1;

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
