#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to newly allocated space containing concatenated string,
 *         or NULL on failure. If NULL is passed, treat it as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    unsigned int i, j, len1, len2;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths of both strings */
    len1 = 0;
    while
