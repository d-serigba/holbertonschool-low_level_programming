#include <stdio.h>

/**
 * swap_int - tkt
 * @a: a
 * @b: a
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
